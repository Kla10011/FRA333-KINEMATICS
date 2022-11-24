#!/usr/bin/python3
import math
from re import S
import numpy as np
from numpy import ones, zeros
import rclpy
import json
import sys, os, yaml
from rclpy.node import Node
from builtin_interfaces.msg import Duration
from trajectory_msgs.msg import JointTrajectory , JointTrajectoryPoint
from robot_interfaces.srv import SetGoal
from sensor_msgs.msg import Imu
from lab3_control_robot.cheat_tool import imu_calibration, get_linear_vel, get_position, inverse_kinematics, call_json

class Trajectory_publisher(Node):

    def __init__(self):
        super().__init__('trajectory_publsiher_node')
        publish_topic = "/joint_trajectory_position_controller/joint_trajectory"
        # service for test
        self.set_goal = self.create_service(SetGoal,'set_goal',self.set_goal_callback)

        # create publisher and publishtopic to gazebo
        self.trajectory_publihser = self.create_publisher(JointTrajectory,publish_topic, 10)

        # subscription from IMU
        self.imu_sub = self.create_subscription(Imu,'/Imu_arduino',self.subscription_callback,10)

        # timer
        self.timer_period = 0.1
        self.timer = self.create_timer(self.timer_period, self.timer_callback)

        # user variables
        self.joints = ['joint_1','joint_2','joint_3']
        self.start_positions = [0.0, 0.0, 0.0]
        self.goal_positions = [0.0, 0.0, 0.0]
        self.setpoint_position = self.start_positions
        self.i = 0
        self.vel_init = [0.0, 0.0, 0.0]
        self.pos_init = [0.0, 0.0, 0.0]
        self.is_cal = True
        self.cal_ang = [0, 0, 0]
        self.cal_acc = [0, 0, 0]
        

    def subscription_callback(self,msg):

        self.imu_angular_vel = [msg.angular_velocity.x - self.cal_ang[0], 
                                msg.angular_velocity.y - self.cal_ang[1],
                                msg.angular_velocity.z - self.cal_ang[2]]
        self.imu_linear_acc = [msg.linear_acceleration.x - self.cal_acc[0],
                               msg.linear_acceleration.y - self.cal_acc[1], 
                               msg.linear_acceleration.z - self.cal_acc[2]]
        
        # print(self.imu_angular_vel) 
        if self.is_cal:
            self.is_cal, self.cal_ang, self.cal_acc = call_json(self.imu_angular_vel, self.imu_linear_acc)

        else:
            # self.imu_angular_vel = list(map(lambda x:round(x,2), self.imu_angular_vel))

            vel = get_linear_vel(self.imu_linear_acc, self.vel_init, self.timer_period)
            scale = 0.1
            self.vel_init[0] = vel[0]*scale
            self.vel_init[1] = vel[1]*scale
            self.vel_init[2] = vel[2]*scale
            # print('v =', self.vel_init)
            
            pos = get_position(self.vel_init, self.timer_period)
            self.pos_init[0] += round(pos[0],2)
            self.pos_init[1] += round(pos[1],2)
            self.pos_init[2] += round(pos[2],2)
            if self.pos_init[0] >= 0.67:
                self.pos_init[0] = 0.67
            if self.pos_init[1] >= 0.67:
                self.pos_init[1] = 0.67
            if self.pos_init[2] >= 0.3:
                self.pos_init[2] = 0.3
            print('p =', self.pos_init)

            gamma = [[1,1],[1,-1],[-1,-1],[-1,1]]
            for i in gamma:
                q, flag  = inverse_kinematics(self.pos_init, i)
                if flag == True: # can do this task space
                    self.goal_positions = [q[0], q[1], q[2]]
                    print(q)
                    break

                # elif flag == False:
                #     # self.goal_positions = self.pos_init
                #     print('False')
            if flag == False:
                print('False')

            # self.goal_positions = self.pos_init
            self.goal_positions = [0.5,0.5,0.5]
            # print(self.goal_positions)

    def set_goal_callback(self,request,response):
        self.goal_positions[0] = round(request.g[0],2)
        self.goal_positions[1] = round(request.g[1],2)
        self.goal_positions[2] = round(request.g[2],2)
        
        return response

    def timer_callback(self):

        # self.i = self.i + 1
        # if self.i == 30:
        #     self.i = 0
        #     if self.is_change_point == False:
        #         self.is_change_point = True
        #         self.setpoint_position = self.start_positions
        #     else:
        #         self.is_change_point = False
        #         self.setpoint_position = self.goal_positions

        self.setpoint_position = self.goal_positions 

        bazu_trajectory_msg = JointTrajectory()
        bazu_trajectory_msg.joint_names = self.joints
        ## creating a point
        point = JointTrajectoryPoint()
        point.positions = self.setpoint_position
        point.time_from_start = Duration(sec=1)
        ## adding newly created point into trajectory message
        bazu_trajectory_msg.points.append(point)
        # point.positions = self.goal_positions
        # point.time_from_start = Duration(sec=8)
        # bazu_trajectory_msg.points.append(point)
        self.trajectory_publihser.publish(bazu_trajectory_msg)
        # print(self.setpoint_position)
 
def main(args=None):
    rclpy.init(args=args)
    joint_trajectory_object = Trajectory_publisher()
    try:
        while rclpy.ok():
            rclpy.spin_once(joint_trajectory_object)
    except KeyboardInterrupt:
        print('repeater stopped cleanly')
    except BaseException:
        print('exception in repeater:', file=sys.stderr)
        raise
    finally:
        joint_trajectory_object.destroy_node()
        rclpy.shutdown() 


if __name__ == '__main__':
    main()