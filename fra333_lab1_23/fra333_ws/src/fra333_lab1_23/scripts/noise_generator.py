#!/usr/bin/python3

# import all other neccesary libraries here
from re import S
from statistics import mean, variance
import rclpy                            #li node
from rclpy.node import Node
from std_msgs.msg import Float64
from lab1_interfaces.srv import SetNoise
import sys
import numpy as np

class NoiseGenerator(Node):
    def __init__(self):
        super().__init__('noise_generator')
        # get the rate from argument or default
        if len(sys.argv)>2: 
            self.rate = float(sys.argv[1])
        else:
            self.rate = 5.0
        # add codes here topic
        self.noise_pub = self.create_publisher(Float64,'/noise',10)         #(type,'topic',จำนวนข้อมูลที่เก็บได้ใน topic)
        # add codes here service
        self.set_noise = self.create_service(SetNoise,'/set_noise',self.set_noise_callback)
        # add codes here timer callback
        self.timer = self.create_timer(1/self.rate,self.timer_callback)                      # 5 Hz      
        # additional attributes # default
        self.mean = 0.0
        self.variance = 1.0
        self.get_logger().info(f'Starting {self.get_namespace()}/{self.get_name()} with the default parameter. mean: {self.mean}, variance: {self.variance}')
    def set_noise_callback(self,request:SetNoise.Request,response:SetNoise.Response):
        # add codes here
        self.mean = request.mean.data
        self.variance = request.variance.data
        return response

    def timer_callback(self):
        noise = Float64()
        mu, sigma = 0, 0.1                          # mean and standard deviation 
        noise.data = np.random.normal(mu, sigma**0.5)   # จำนวน random
        self.noise_pub.publish(noise)
        

def main(args=None):
    rclpy.init(args=args)
    print('start')
    controller = NoiseGenerator()
    rclpy.spin(controller)
    controller.destroy_node()
    rclpy.shutdown()            #
    

if __name__=='__main__':
    main()
