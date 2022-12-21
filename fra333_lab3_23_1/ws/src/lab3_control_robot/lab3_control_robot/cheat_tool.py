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
        if len(data['angular']) >= 100:
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

    Rotation = np.empty((3,3,4),dtype=np.float32)
    Position = np.empty((1,3,4)) 

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
        Rotation[:,:,i] = np.array(H[:3,:3])
        Position[:,:,i] = [H[:3,3]]
 
        
    H0_e = H@H3_e
    Rotation[:,:,3] = np.array(H0_e[:3,:3])
    Position[:,:,3] = H0_e[:3,3]

    R_e = Rotation[:,:,3]
    p_e = Position[:,:,3]
    #print(Tra_x,"\n",Rot_x,"\n",Tra_z,"\n",Rot_z)

    return Rotation,Position,R_e,p_e,H0_e
    
def Jacobian(q):
    J = np.zeros((6,len(q))); # สร้าง Matrix ที่มีขนาด 6*3 
    R,P,R_e,p_e,H0_e= forward_kin(q)

    for i in range(len(q)): # วนลูปตามจำนวน Joint configulation เพื่อคำนวณหา Jacobian matrix ของแต่ละ joint ซึ่งภายใน Jacobian matrix จะประกอบไปด้วย Linear และ Rotational
        # จากเดิมจะมีแค่ vector z([0 0 1]) ที่หมายถึงการหมุนรอบแกนของ frame นั้นๆ เนื่องจากการหมุนรอบแกน z เป็นการหมุนที่เทียบกับ frame ของตัวเอง
        # ดังนั้น จึงต้องคูณ Rotation matrix เพื่อหาการหมุนที่เทียบกับ Global frame ซึ่งหาได้จากฟังก์ชั่น FKHW2(q) และนำ Rotation matrix ของ frame ที่เราสนใจมาคูณกับ vector z

        # ในการคำนวณ Linear หลังจากได้ Rotation matrix ที่เทียบกับ Global frame แล้วจะเอามา cross กับตำแหน่งของ end-eff ลบด้วย ตำแหน่งของ frame ที่สนใจ โดยที่ทั้งคู่จะเทียบกับ Global frame เสมอ                                   
        Linear = np.cross(R[:,:,i][:,2] ,p_e-P[:,:,i]) 

        # ในการคำนวณ Rotational สามารถใช้ Rotation matrix ที่เทียบกับ Global frame ได้เลย                                
        Rotational = R[:,:,i][:,2] #

        # นำค่าที่คำนวณได้มาใส่ column ใน Jacobian matrix โดย Rotational มาก่อนที่มีขนาด 3*1 ตามด้วย Linear ที่มีขนาด 3*1 รวมเป็นขนาด 6*1 ทั้งหมด 3 columns ตามจำนวน Joint configulation
        J[0:3,i] = Rotational
        J[3:,i] = Linear
    J = J.tolist() # เปลี่ยนจาก np.array เป็น list

    return J

def IV_Kin(q,p_dot):
    A = np.array(Jacobian(q))
    J = A[3:]
    J_inv = np.linalg.inv(J)
    q_dot = J_inv @ p_dot
    return q_dot    

# /if __name__ == "__main__":
# a = np.array(Jacobian([0,0,0]))

print(forward_kin([0,0,0]))