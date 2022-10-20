import math
import numpy as np

# 2D RRIK
def RRIK(x,y,F,L1,L2):
    c2 = (x**2+y**2-L1**2-L2**2)/(2*L1*L2)
    if -1 <= c2 and c2 <=1 :
        s2 = F*math.sqrt(1-c2**2)
        q3 = math.atan2(y,x)-math.atan2(L2*s2,L1+L2*c2)
    else:
        flag = False
        return [0. ,0. ,0.],flag
    q2 = math.atan2(s2,c2)
    return [q2,q3]

# 3D RRRIK
def inverse_kin(point,gamma,h1,L1,L2,L3):
    flag = True
    x = point[0]
    y = point[1]
    z = point[2]

    Fq1 = gamma[0]
    Fq23 = gamma[1]
    
    # q1
    r = Fq1*(math.sqrt(x**2+y**2))
    c1 = x/r
    s1 = y/r
    q1 = math.atan2(y/Fq1,x/Fq1)
    # q23
    Q = RRIK(r-L1,z-h1,Fq23,L2,L3)

    return [q1,Q[0],Q[1]],flag