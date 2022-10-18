import math
import re 
import numpy as np

def forward_kin(q):
    DH_table = ([[0,0,0.3,0.],
                [0.16,math.pi/2,0.,0.],
                [0.35,0.,0.,0.]])
    P = [1,1,1]
    H = np.identity(4)
    joint = 3
    H3_e = [[0.,0.,1.,0.16],
            [1.,0.,0.,0.],
            [0.,1.,0.,0.],
            [0.,0.,0.,1.]]

    for i in range(0,joint):
        Tx = DH_table[i][0] 
        Rx = DH_table[i][1] 
        Tz = DH_table[i][2] 
        Rz = DH_table[i][3] 
        Tra_x   = [[1.,0.,0.,Tx],
                [0.,1.,0.,0.],
                [0.,0.,1.,0.],
                [0.,0.,0.,1.]]

        Rot_x   = [[1.,0.,0.,0.],
                [0.,math.cos(Rx),-1*math.sin(Rx),0.],
                [0.,math.sin(Rx),math.cos(Rx),0.],
                [0.,0.,0.,1.]]
                            
        Tra_z   = [[1.,0.,0.,0.],
                [0.,1.,0.,0.],
                [0.,0.,1.,Tz],
                [0.,0.,0.,1.]]
        Rot_z   = [[math.cos(Rz),-1*math.sin(Rz),0.,0.],
                [math.sin(Rz),math.cos(Rz),0.,0.],
                [0.,0.,1.,0.],
                [0.,0.,0.,1.]]

        if P[i] == 1:
            # print(q[i])
            Rot_z_q   = [[math.cos(q[i]),-1*math.sin(q[i]),0.,0.],
                        [math.sin(q[i]),math.cos(q[i]),0.,0.],
                        [0.,0.,1.,0.],
                        [0.,0.,0.,1.]]
            Hj = Rot_z_q
        else:
            Tra_z_q   = [[1.,0.,0.,0.],
                        [0.,1.,0.,0.],
                        [0.,0.,1.,q[i]],
                        [0.,0.,0.,1.]]
            Hj = Tra_z_q

        H = H @ Tra_x @ Rot_x @ Tra_z @ Rot_z @ Hj
        
    H0_e = H@H3_e
#     print(Tra_x,"\n",Rot_x,"\n",Tra_z,"\n",Rot_z)
    return H0_e
        
