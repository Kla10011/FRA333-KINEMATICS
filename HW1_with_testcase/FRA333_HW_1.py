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
    def numbers_to_strings(argument):
        switcher = {
            0: "unknow",
            1: "unknow",
            2: "unknow",
            3: int(60),
            4: int(-60),
        }
        return switcher.get(argument, "nothing")
    def numbers_to_d(argument):
        switcher = {
            0: "unknow",
            1: "unknow",
            2: "unknow",
            3: int(60),
            4: int(-60),
            5: int(-60),
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
        state = self.a_i
        direction = 0 # intial degrees
        for i in com:
            com_state = int(i)
            

            wall = np.concatenate((list(map(lambda x : [x],W[0])),list(map(lambda y : [y],W[1]))),1) # create wall
            if state in wall: # condition wall
                pass


             
# if __name__ == '__main__':
#     test = 1