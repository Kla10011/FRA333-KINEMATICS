#!/usr/bin/python3
from ast import Import
from calendar import c
from distutils import cmd
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist

class Dummy(Node):
    def __init__(self):
        super().__init__('node_name')
        # 
        self.cmd_sublisher = self.create_publisher(Twist,'/turtle1/cmd_vel',10)
        self.create_timer(0.1,self.timer_callback)
    def timer_callback(self):
        msg = Twist()
        msg.linear.x =1.0
        msg.angular.z = 1.0
        self.cmd_sublisher.publish(msg)

    

def main(args=None):
    rclpy.init(args=args)
    node = Dummy()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
