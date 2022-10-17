import math
import re 
import numpy as np

def forward_kin(Hj):
    DH_table = np.array([[0,0,0.3,0.],
                    [0.35,math.pi/2,0.,0.],
                    [0.35,0.,0.,0.]])
    P = [[1],[1],[1]]
    H = np.identity(4)
    for i in range(0,3):
        Tx = DH_table[i][0] 
        Rx = DH_table[i][1] 
        Tz = DH_table[i][2] 
        Rz = DH_table[i][3] 
        Tra_x   = np.array([[1.,0.,0.,Tx],
                            [0.,1.,0.,0.],
                            [0.,0.,1.,0.],
                            [0.,0.,0.,1.]])

        Rot_x   = np.array([[1.,0.,0.,0.],
                            [0.,math.cos(Rx),-1*math.sin(Rx),0.],
                            [0.,math.sin(Rx),math.cos(Rx),0.],
                            [0.,0.,0.,1.]])
                            
        Tra_z   = np.array([[1.,0.,0.,0.],
                            [0.,1.,0.,0.],
                            [0.,0.,1.,Tz],
                            [0.,0.,0.,1.]])

        Rot_z   = np.array([[math.cos(Rz),math.sin(Rz),0.,0.],
                            [math.sin(Rz),math.cos(Rz),0.,0.],
                            [0.,0.,1.,0.],
                            [0.,0.,0.,1.]])

        if P(i) == 1:
            Rot_z_Hj   = np.array([[math.cos(Hj(i)),math.sin(Hj(i)),0.,0.],
                                [math.sin(Hj(i)),math.cos(Hj(i)),0.,0.],
                                [0.,0.,1.,0.],
                                [0.,0.,0.,1.]])
            Hj = Rot_z_Hj
        else:
            Tra_z_Hj   = np.array([[1.,0.,0.,0.],
                                [0.,1.,0.,0.],
                                [0.,0.,1.,Hj(i)],
                                [0.,0.,0.,1.]])
            Hj = Tra_z_Hj

        H = H@Tra_x@Rot_x@Tra_z@Rot_z@Hj
        H3_e = np.array([[0.,0.,1.,0.],
                        [1.,0.,0.,0.],
                        [0.,-1.,0.,0.16],
                        [0.,0.,0.,1.]])
        H0_e = H@H3_e
        print(H0_e)
    return H0_e
        
