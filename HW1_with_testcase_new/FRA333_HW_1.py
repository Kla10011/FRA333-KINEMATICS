    # a_i is initial position
    # com is command {'0'->stop, '1'->forward, '2'->backward, '3'->turn left, '4'->turn right}
    # W is wall
    # add your code here
    # intial degrees
#!/usr/bin/python3
from trackbeebot import BeeBot
import matplotlib.pyplot as plt 
from matplotlib.patches import Polygon
import numpy as np
import math
import json

class MyBeeBot(BeeBot):
    def __init__(self,a_i):
        super().__init__(a_i)
        self.a_i = np.array(a_i)
        self.a_i_m = []
        self.a_i_n = []
        self.a_i_x = []
        self.a_i_y = []
        self.d = 0
        self.direction = 0 # intial degrees
        self.a_direction = [1,1]
    def numbers_to_action(self,argument): #affect ot a_i,a_j
        switcher = {
            0: 0,
            1: 1,
            2: -1,
            3: 60,
            4: -60,
        }
        return switcher.get(argument, "nothing")
    def numbers_to_direction(self,argument): #affect ot a_i,a_j
        switcher = {
            0: [1,1],
            1: [0,1],#60 degrees
            2: [-1,0],#120 egrees
            3: [-1,-1],#180 degrees
            4: [0,-1],#240 degrees
            5: [1,0],#300 degrees
        }
        return switcher.get(argument, "nothing")
    def pos2pos(self, m,n):                                             # initial position Beebot
        self.a_i_m += [m]
        self.a_i_n += [n]
    def pos2index(self, m,n):                                             # initial position Beebot
        m=float((m)*(np.math.sqrt(3))) #transtorm pos2scaleG
        n=float((n)*(np.math.sqrt(3))) #transtorm pos2scaleG
        x = ((np.math.sqrt(3)/2)*m)-((np.math.sqrt(3)/2)*n)
        y = (((1/2)*m)+((1/2)*n))
        self.a_i_x += [x]
        self.a_i_y += [y]
    def trackBeeBot(self, com, W): 
        wall = list(map(lambda x,y: [x,y],W[0],W[0]))
        for i in com:
            com_state = int(i)
            # self.a_direction = np.array(self.numbers_to_direction(abs(self.d))) #เตรียมเดิน
            if com_state in [3,4]:
                action = self.numbers_to_action(com_state) #look actionG
                self.direction += action
                self.d = ((self.direction/60)%6) #find direction
                action = 0 # reset degrees 
                self.a_direction = np.array(self.numbers_to_direction(abs(self.d))) #เตรียมเดิน
            elif com_state in [1,2]: # walk
                action = np.array(self.numbers_to_action(com_state)) #look action from {0,1,2}
                # print(com_state,action,self.a_direction,self.a_i)
                future = self.a_i + (self.a_direction*action) #predict
                self.pos2pos(self.a_i[0],self.a_i[1])
                self.pos2index(self.a_i[0],self.a_i[1])
                # if [future[0],future[1]] in wall: # condition wall
                #     self.a_i = self.a_i  #undo
                # else:
                self.a_i = future #do
                print(com_state,self.a_i,self.direction,self.d)

        A = np.array([self.a_i_m,self.a_i_n],dtype=np.int)
        P = np.array([self.a_i_x,self.a_i_y])
    
        return [A,P]