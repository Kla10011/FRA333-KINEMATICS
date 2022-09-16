    # a_i is initial position
    # com is command {'0'->stop, '1'->forward, '2'->backward, '3'->turn right, '4'->turn left}
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
        self.d = 0
        self.direction = 0 # intial degrees
    def numbers_to_action(self,argument): #affect ot a_i,a_j
        switcher = {
            0: 0,
            1: 1,
            2: -1,
            3: 60,
            4: [-1,0],
            5: -60,
        }
        return switcher.get(argument, "nothing")
    def numbers_to_direction(argument): #affect ot a_i,a_j
        switcher = {
            0: [1,1],#0,360 degrees
            1: [0,1],-1: [0,1],#60 degrees
            2: [-1,0],-2: [-1,0],#120 egrees
            3: [-1,-1],-3: [-1,-1],#180 degrees
            4: [0,-1],-4: [0,-1],#240 degrees
            5: [1,0],-5: [1,0],#300 degrees
        }
        return switcher.get(argument, "nothing")

    def trackBeeBot(self, com, W): 
        for i in com:
            com_state = int(i)
            wall = np.concatenate((list(map(lambda x : [x],W[0])),list(map(lambda y : [y],W[1]))),1) # create wall
            if com_state in [3,4]:
                action = self.numbers_to_action(com_state) #look action
                self.direction += action
                self.d = ((self.direction/60)%6)*(action/60) #find direction
                action = 0 # reset degrees 
                a_direction = np.array(self.numbers_to_direction(self.d)) #เตรียมเดิน
            elif com_state in [0,1,2]:
                action = np.array(self.numbers_to_action(com_state)) #look action from {0,1,2}
                future = self.a_i + (a_direction*action) #predict
                if future in wall: # condition wall
                    self.a_i = self.a_i - (a_direction*action) #undo
                else:
                    self.a_i = future #do

                
            




             
# if __name__ == '__main__':
#     test = 1