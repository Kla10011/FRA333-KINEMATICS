from re import S
import rclpy                            #libraries node
import sys
from rclpy.node import Node
from std_msgs.msg import Float64
from sensor_msgs.msg import JointState
from geometry_msgs.msg import Point
from robot_23_kinematics_interfaces.srv import GetPosition
from robot_23_kinematics.forward_kinematics import forward_kin
# from robot_23_kinematics_interfaces.srv import SolveIK
import math 
import numpy as np

class Server(Node):
    def __init__(self):
        super().__init__('Server')
        # add codes here service
        self.GetPos = self.create_service(GetPosition,'/set_joints',self.set_GetPos_callback)
        # self.SolveIK = self.create_service(SolveIK,'/SolIK',self.set_SolIK_callback)
        # add codes here topic
        self.joint_states = self.create_publisher(Float64,'/joint_states',10)         #(type,'topic',จำนวนข้อมูลที่เก็บได้ใน topic)
        # add codes here timer callback
        self.timer = self.create_timer(1/10,self.timer_callback)                      # 5 Hz      
        # additional attributes # default
        self.DH_table = np.array([[0,0,0.3,0.],
                        [0.35,math.pi/2,0.,0.],
                        [0.35,0.,0.,0.]])
        self.P = [[1],[1],[1]]
        self.H = np.identity(4)
        self.joints = JointState()
        self.joints.name = ['joint_1','joint_2','joint_3']
        self.joints.position = [0.,0.,0.]


 
    def set_GetPos_callback(self,request:GetPosition.Request,response:GetPosition.Response):
        # add codes here
        Hj = request.joints.position
        A = forward_kin(self.DH_table,self.P,self.H,Hj)
        response.position = A
        return response

    # def set_SolIK_callback(self,request:SolveIK.Request,response:SolveIK.Response):
    #     # add codes here
 
    #     return response
        
    def timer_callback(self):
        noise = Float64()
        mu, sigma = self.mean, self.variance                          # mean and variance to standard deviation
        noise.data = np.random.normal(mu, sigma**0.5)   # จำนวน random
        self.noise_pub.publish(noise)
        print(self.rate)
        

def main(args=None):
    rclpy.init(args=args)       #เตรียมตัวก่อนสร้าง node
    SerVer = Server()
    print('start')
    rclpy.spin(SerVer)        #run loop
    SerVer.destroy_node()
    rclpy.shutdown()            #shutdown
    

if __name__=='__main__':
    main()