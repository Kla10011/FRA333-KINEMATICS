#!/usr/bin/python3
from re import S
import rclpy 
from rclpy.node import Node
from geometry_msgs.msg import Twist
from std_msgs.msg import String

class Dummy(Node):
    def __init__(self):
        super().__init__('node_name')
        self.msg_publisher = self.create_publisher(String,'/turtle1/msg',10)        #(type,'topic',unknow)
        self.cmd_publisher = self.create_publisher(Twist,'/turtle1/cmd_vel',10)
        self.timer = self.create_timer(0.1,self.timer_calback)                      #(time(s),funtion) เรียกทุกกี่วิ
    def timer_calback(self):
        msg = Twist()
        msg.linear.x = 1.0
        msg.angular.z = 1.0
        self.cmd_publisher.publish(msg)
        self.talk()
    def talk(self):
        msg = String()
        msg.data = "hooooo" #edit data in string
        self.msg_publisher.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    controller = Dummy()
    print('start')
    rclpy.spin(controller)
    controller.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
