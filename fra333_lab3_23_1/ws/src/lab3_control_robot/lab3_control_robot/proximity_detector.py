#!/usr/bin/python3
import math
from re import S
import numpy as np
import rclpy
import sys, os, yamlcl
from rclpy.node import Node
from builtin_interfaces.msg import Duration
from trajectory_msgs.msg import JointTrajectory , JointTrajectoryPoint
from robot_interfaces.srv import IsEnable
from robot_interfaces.srv import SetGoal
from sensor_msgs.msg import Imu , JointState
from std_msgs.msg import Bool,Float64MultiArray
from lab3_control_robot.cheat_tool import imu_calibration, get_linear_vel, get_position, inverse_kinematics, call_json

class proximity_detector(Node):

    def __init__(self):
        super().__init__('Prox_detector')

        # subscription from Joint_states
        self.joint_sub = self.create_subscription(JointState,'/joint_states',self.joint_states_callback,10)
        # subscription from scheduler
        self.scheduler_sub = self.create_subscription(Float64MultiArray(),'/Pf',self.joint_states_callback,10)

        # publish hasReached
        self.has_Reached = self.create_publisher(Bool,'/hasReached',10)


        # timer
        self.timer_period = 0.1
        self.timer = self.create_timer(self.timer_period, self.timer_callback)

    def forward_kin(q):
        DH_table = ([[0,0,0.3,0.],
                    [0.16,math.pi/2,0.,0.],
                    [0.35,0.,0.,0.]])
        P = [1,1,1]
        H = np.identity(4)
        joint = 3
        H3_e = [[0.,0.,1.,0.16],
                [1.,0.,0.,0.],
                [0.,1.,0.,0.],
                [0.,0.,0.,1.]]

        Rotation = np.empty((3,3,4),dtype=np.float32)
        Position = np.empty((1,3,4)) 

        for i in range(0,joint):
            Tx = DH_table[i][0] 
            Rx = DH_table[i][1] 
            Tz = DH_table[i][2] 
            Rz = DH_table[i][3] 
            Tra_x   = [[1.,0.,0.,Tx],
                    [0.,1.,0.,0.],
                    [0.,0.,1.,0.],
                    [0.,0.,0.,1.]]

            Rot_x   = [[1.,0.,0.,0.],
                    [0.,math.cos(Rx),-1*math.sin(Rx),0.],
                    [0.,math.sin(Rx),math.cos(Rx),0.],
                    [0.,0.,0.,1.]]
                                
            Tra_z   = [[1.,0.,0.,0.],
                    [0.,1.,0.,0.],
                    [0.,0.,1.,Tz],
                    [0.,0.,0.,1.]]
            Rot_z   = [[math.cos(Rz),-1*math.sin(Rz),0.,0.],
                    [math.sin(Rz),math.cos(Rz),0.,0.],
                    [0.,0.,1.,0.],
                    [0.,0.,0.,1.]]

            if P[i] == 1:
                # print(q[i])
                Rot_z_q   = [[math.cos(q[i]),-1*math.sin(q[i]),0.,0.],
                            [math.sin(q[i]),math.cos(q[i]),0.,0.],
                            [0.,0.,1.,0.],
                            [0.,0.,0.,1.]]
                Hj = Rot_z_q
            else:
                Tra_z_q   = [[1.,0.,0.,0.],
                            [0.,1.,0.,0.],
                            [0.,0.,1.,q[i]],
                            [0.,0.,0.,1.]]
                Hj = Tra_z_q

            H = H @ Tra_x @ Rot_x @ Tra_z @ Rot_z @ Hj
            Rotation[:,:,i] = np.array(H[:3,:3])
            Position[:,:,i] = [H[:3,3]]
    
            
        H0_e = H@H3_e
        Rotation[:,:,3] = np.array(H0_e[:3,:3])
        Position[:,:,3] = H0_e[:3,3]

        R_e = Rotation[:,:,3]
        p_e = Position[:,:,3]
        #print(Tra_x,"\n",Rot_x,"\n",Tra_z,"\n",Rot_z)
        # Rotation,Position,R_e,p_e,H0_e
        return p_e
    

    def joint_states_callback(self,msg):
        self.q = np.array(msg.position)

    def timer_callback(self):
        A = Bool()
        FPK = self.forward_kin(self.joints_sub.position)
        Pf = self.scheduler_sub
        if abs(Pf - FPK)<= 0.1:
            A.data = True
        else :
            A.data = False
        self.has_Reached.publish(A)

 
def main(args=None):
    rclpy.init(args=args)
    joint_trajectory_object = proximity_detector()
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