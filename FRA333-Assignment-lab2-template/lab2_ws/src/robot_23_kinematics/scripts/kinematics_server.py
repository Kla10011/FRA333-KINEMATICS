#!/usr/bin/env python3
import rclpy                            #libraries node
from rclpy.node import Node
from std_msgs.msg import Float64
from sensor_msgs.msg import JointState
from geometry_msgs.msg import Point
from robot_23_kinematics_interfaces.srv import GetPosition
from robot_23_kinematics_interfaces.srv import SolveIK
from robot_23_kinematics.forward_kinematics import forward_kin
from robot_23_kinematics.inverse_kinematics import inverse_kin
import math 
import numpy as np

class Server(Node):
    def __init__(self):
        super().__init__('kinematics_server')
        # add codes here service
        self.GetPos = self.create_service(GetPosition,'set_joints',self.set_GetPos_callback)
        self.SolveIK = self.create_service(SolveIK,'/solve_ik',self.set_SolIK_callback)

        
        # add codes here topic
        self.joint_states = self.create_publisher(JointState,'joint_states',10)         #(type,'topic',จำนวนข้อมูลที่เก็บได้ใน topic)
        
        
        # add codes here timer callback
        self.timer = self.create_timer(1/10,self.timer_callback)                      # 5 Hz      
        
        
        # additional attributes # default
        self.joints = JointState()  
        self.joints.name = ['joint_1','joint_2','joint_3']
        self.joints.position = [0.,0.,0.]

        self.h1 = 0.3
        self.L1 = 0.16
        self.L2 = 0.35
        self.L3 = 0.16
        
 
    def set_GetPos_callback(self,request:GetPosition.Request,response:GetPosition.Response):
        # add codes here
        self.joints.position = request.joints.position
        A = forward_kin(self.joints.position)
        Posofrobot = Point()
        Posofrobot.x = A[0][3]
        Posofrobot.y = A[1][3]
        Posofrobot.z = A[2][3]
        response.position = Posofrobot 
        return response 

    def set_SolIK_callback(self,request:SolveIK.Request,response:SolveIK.Response):
        # add codes here
        self.joints.position = [request.point.x,request.point.y,request.point.z]
        # self.joints.position = request.point ไม่ได้
        gamma = request.gamma

        Q,flag = inverse_kin(self.joints.position,gamma,self.h1,self.L1,self.L2,self.L3)
        self.joints.position = [Q[0],Q[1],Q[2]]

        response.q = self.joints
        response.flag = flag
        return response 
 
        
    def timer_callback(self):
        self.joints.header.stamp = self.get_clock().now().to_msg()
        self.joint_states.publish(self.joints) #ทำให้ robot หมุน
        

def main(args=None):
    rclpy.init(args=args)       #เตรียมตัวก่อนสร้าง node
    SerVer = Server()
    print('start')
    rclpy.spin(SerVer)        #run loop
    SerVer.destroy_node()
    rclpy.shutdown()            #shutdown
    

if __name__=='__main__':
    main()