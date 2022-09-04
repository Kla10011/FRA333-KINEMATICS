#!/usr/bin/python3

# import all other neccesary libraries
from std_msgs.msg import Float64
import sys

class VelocityMux(Node):
    def __init__(self):
        # get the rate from argument or default
        if sys.argv[1]:
            self.rate = float(sys.argv[1])
        else:
            self.rate = 5.0
        # add codes here

        # additional attributes
        self.cmd_vel = Twist()
        self.get_logger().info(f'Starting {self.get_name()}')

    def linear_vel_sub_callback(self,msg:Float64):
        # remove pass and add codes here
        pass
    
    def angular_vel_sub_callback(self,msg:Float64):
        # remove pass and add codes here
        pass
    
    def timer_callback(self):
        # remove pass and add codes here
        pass

def main(args=None):
    # remove pass and add codes here
    pass

if __name__=='__main__':
    main()