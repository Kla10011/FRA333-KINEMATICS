#!/usr/bin/python3

# import all other neccesary libraries here
from re import S
from statistics import variance
import rclpy
from rclpy.node import Node
# (std_msgs/Float64)
# /mean (std_msgs/Float64)
# /variance (std_msgs/Float64)
from std_msgs.msg import Float64
from lab1_interfaces.srv import SetNoise
import sys

class NoiseGenerator(Node):

    def __init__(self):
        super().__init__('noise_generator')
        # get the rate from argument or default
        if len(sys.argv)>2: 
            self.rate = float(sys.argv[1])
        else:
            self.rate = 5.0
        # add codes here topic
        self.noise = self.create_publisher(Float64,'/noise',10)         #(type,'topic',unknow)
        # add codes here service
        self.set_noise = self.create_service(Float64,'/set_noise')

        self.timer = self.create_timer(1/self.rate,self.set_noise_callback)                      # 5 Hz          

        # additional attributes
        self.mean = 0.0
        self.variance = 1.0
        self.get_logger().info(f'Starting {self.get_namespace()}/{self.get_name()} with the default parameter. mean: {self.mean}, variance: {self.variance}')
    
    def set_noise_callback(self,request:SetNoise.Request,response:SetNoise.Response):
        # add codes here
        set_noise = Float64()
        set_noise.linear.mean = 1
        set_noise.linear.variance = 0.1
        set_noise.angular.mean = 0
        set_noise.angular.variance = 3

        self.mean.publish(mean)
        self.variance.publish(variance)

        return response
    
    def timer_callback(self):
        # remove pass and add codes here
        pass

def main(args=None):
    # remove pass and add codes here
    pass

if __name__=='__main__':
    main()
