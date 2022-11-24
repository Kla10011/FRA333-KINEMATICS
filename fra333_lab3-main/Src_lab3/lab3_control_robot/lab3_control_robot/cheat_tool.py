import numpy as np
import math
import json
from json.decoder import JSONDecodeError

def call_json(l1,l2):
    flag = True
    cal_an = [0.0, 0.0, 0.0]
    cal_ac = [0.0, 0.0, 0.0]
    # read json
    f = open('data.json')
    
    try :
        data = json.load(f)
        if len(data['angular']) >= 1000:
            flag = False
            for i in range(len(cal_ac)):
                cal_an[i] = sum(np.array(data['angular'])[:,i])/len(np.array(data['angular'])[:,i])
                cal_ac[i] = sum(np.array(data['linear'])[:,i])/len(np.array(data['linear'])[:,i])
            # print(cal_ac, cal_an)
        else:
            data["angular"].append(l1)
            data["linear"].append(l2)
    except JSONDecodeError:
        data = {"angular": [l1], "linear": [l2] }
    
    f.close()
    # Data to be written 
    with open("data.json", "w") as outfile:
        json.dump(data, outfile)

    print(len(data["linear"]))
    return flag, cal_an, cal_ac

def imu_calibration(ang,acc):
    #calibrate 1000 time
    an = []
    ac = []
    flag = True
    if len(an) == 1000 or len(ac) == 1000:
        call_json(an,ac)
        flag = False
    an.append(ang)
    ac.append(acc)

    return flag

def get_linear_vel(acc, v_0, dt):
    v = [0, 0, 0]
    for i in range(len(v_0)):
        v[i] = v_0[i] + acc[i]*dt

    return v

def get_position(vel, dt):
    p = [0, 0, 0]
    for i in range(len(vel)):
        p[i] =  vel[i]*dt

    return p

def inverse_kinematics(p,gamma):
    # setup parameters
    flag = True
    h = 0.3
    l_1 = 0.16
    l_2 = 0.35
    l_3 = 0.16

    x = p[0]
    y = p[1]
    z = p[2]
    g1 = gamma[0]
    g2 = gamma[1]
    
    # Q1
    s_1 = y/g1
    c_1 = x/g1
    q_1 = np.arctan2(s_1,c_1)

    # Q3
    c_3 = ((g1*((x**2+y**2)**0.5) - l_1)**2 + (z-h)**2 - l_2**2 - l_3**2)/(2*l_2*l_3)
    # c_3 = round(c_3,13)
    if -1 <= c_3 and c_3 <=1 :
        s_3 = g2*((1-c_3**2)**0.5)
        q_3 = np.arctan2(s_3,c_3)
    else:
        flag = False
        return [0. ,0. ,0.],flag
        
    #Q2
    c_2 = (l_2 + l_3*c_3)*(g1*((x**2+y**2)**0.5)-l_1) + (l_3*s_3)*(z-h)
    s_2 = (-l_3*s_3)*(g1*((x**2+y**2)**0.5)-l_1) + (l_2 + l_3*c_3)*(z-h)
    q_2 = np.arctan2(s_2,c_2)


    return [q_1,q_2,q_3],flag
