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