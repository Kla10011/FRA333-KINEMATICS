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
        self.a_i = a_i
        self.d = 1.0
        self.direction = 0 # intial degrees
    def stash_direction(self,degrees):
        self.direction += degrees
        return self.direction
    def numbers_to_action(argument):
        A=MyBeeBot(BeeBot) 
        switcher = {
            0: "stop",
            1: "forward",
            2: "backward",
            3: A.stash_direction(60),
            4: A.stash_direction(-60),
        }
        return switcher.get(argument, "nothing")
    def numbers_to_direction(argument): #affect ot a_i,a_j
        switcher = {
            0: [1,1],
            1: [0,1],
            2: [-1,0],
            3: [-1,-1],
            4: [0,-1],
            5: [1,0],
        }
        return switcher.get(argument, "nothing")
    # a_i is initial position
    # c is command {'0'->stop, '1'->forward, '2'->backward, '3'->turn right, '4'->turn left}
    # o is obstacle
    
    def trackBeeBot(self, com, W): 
    # a_i is initial position
    # com is command {'0'->stop, '1'->forward, '2'->backward, '3'->turn right, '4'->turn left}
    # W is wall
    # add your code here
        trackBB = MyBeeBot(BeeBot) 
        trackBB.state = self.a_i
        trackBB.direc = self.direction # intial degrees
        for i in com:
            com_state = int(i)
            action = trackBB.numbers_to_action(i)
            

            wall = np.concatenate((list(map(lambda x : [x],W[0])),list(map(lambda y : [y],W[1]))),1) # create wall
            if state in wall: # condition wall
                pass


             
# if __name__ == '__main__':
#     test = 1