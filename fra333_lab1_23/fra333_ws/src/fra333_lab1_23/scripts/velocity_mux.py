#!/usr/bin/python3

# import all other neccesary libraries
from re import T
import rclpy
from rclpy.node import Node
from statistics import mean, variance
from std_msgs.msg import Float64
from geometry_msgs.msg import Twist
import sys

class VelocityMux(Node):
    def __init__(self):
        super().__init__('velocity_multiplexer')
        # get the rate from argument or default
        if len(sys.argv)>=2:
            self.rate = float(sys.argv[1])
        else:
            self.rate = 5.0
        # add codes topic here
        self.cmd_vel = self.create_publisher(Twist,'/turtle1/cmd_vel',10)
        self.timer = self.create_timer(1/self.rate,self.timer_callback)  
        # add codes sub here
        self.linear_sub = self.create_subscription(Float64,'/linear/noise',self.linear_vel_sub_callback,10)
        self.angular_sub = self.create_subscription(Float64,'/angular/noise',self.angular_vel_sub_callback,10)
        # additional attributes
        self.cmd = Twist()
        self.get_logger().info(f'Starting {self.get_name()}')

    def linear_vel_sub_callback(self,msg:Float64):
        self.cmd.linear.x = msg.data
    
    def angular_vel_sub_callback(self,msg:Float64):
        self.cmd.angular.z = msg.data 

    
    def timer_callback(self):
        self.cmd_vel.publish(self.cmd)

       

def main(args=None):
    rclpy.init(args=args)
    velo_mux = VelocityMux()
    print("hahahaha")
    rclpy.spin(velo_mux)
    velo_mux.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
