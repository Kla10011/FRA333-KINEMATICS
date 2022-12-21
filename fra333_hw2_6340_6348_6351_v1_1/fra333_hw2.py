#!/usr/bin/python3
from urllib.robotparser import RobotFileParser
import numpy as np
import math
from HW2_utils import FKHW2

'''
    Name:   Phanthat Likitbantoon 40
            Phufa Boonchuatrong 48
            Ronnakon Mekvimanloi 51
    Date:   02-11-65
    Description:
'''

# Question 1
def endEffectorJacobianHW2(q):
    '''
        q : format list 1x3 [[i_11, i_12, i_13]]
        q unit: rad
        type something here

        return format list 6x3
        [ [i_11, i_12, i_13],
          [i_21, i_22, i_23],
          [i_31, i_32, i_33],
          [i_41, i_42, i_43],
          [i_51, i_52, i_53],
          [i_61, i_62, i_63] ]
    '''
    J = np.zeros((6,len(q))); # สร้าง Matrix ที่มีขนาด 6*3 
    R,P,R_e,p_e = FKHW2(q)

    for i in range(len(q)): # วนลูปตามจำนวน Joint configulation เพื่อคำนวณหา Jacobian matrix ของแต่ละ joint ซึ่งภายใน Jacobian matrix จะประกอบไปด้วย Linear และ Rotational
        # จากเดิมจะมีแค่ vector z([0 0 1]) ที่หมายถึงการหมุนรอบแกนของ frame นั้นๆ เนื่องจากการหมุนรอบแกน z เป็นการหมุนที่เทียบกับ frame ของตัวเอง
        # ดังนั้น จึงต้องคูณ Rotation matrix เพื่อหาการหมุนที่เทียบกับ Global frame ซึ่งหาได้จากฟังก์ชั่น FKHW2(q) และนำ Rotation matrix ของ frame ที่เราสนใจมาคูณกับ vector z

        # ในการคำนวณ Linear หลังจากได้ Rotation matrix ที่เทียบกับ Global frame แล้วจะเอามา cross กับตำแหน่งของ end-eff ลบด้วย ตำแหน่งของ frame ที่สนใจ โดยที่ทั้งคู่จะเทียบกับ Global frame เสมอ                                   
        Linear = np.cross(R[:,:,i][:,2] ,p_e-P[:,i]) 

        # ในการคำนวณ Rotational สามารถใช้ Rotation matrix ที่เทียบกับ Global frame ได้เลย                                
        Rotational = R[:,:,i][:,2] #

        # นำค่าที่คำนวณได้มาใส่ column ใน Jacobian matrix โดย Rotational มาก่อนที่มีขนาด 3*1 ตามด้วย Linear ที่มีขนาด 3*1 รวมเป็นขนาด 6*1 ทั้งหมด 3 columns ตามจำนวน Joint configulation
        J[0:3,i] = Rotational
        J[3:,i] = Linear
    J = J.tolist() # เปลี่ยนจาก np.array เป็น list

    return J

# Question 2
def checkSingularityHW2(q):
    '''
        q : format list 1x3 [[i_11, i_12, i_13]]
        q unit: rad
        type something here
        
        return format bool
    '''
    flag = False 
    Jaco = endEffectorJacobianHW2(q)
    J_new = np.array(Jaco[3:]) # ลด Jacobian matrix เหลือแค่ข้อมูลที่เป็น Linear ทำให้ Jacobian matrix เหลือขนาด 3*3
    det = np.linalg.det(J_new) # หา determinant ของ Jacobian matrix เพื่อหาสภาวะ Singularity
    if abs(det) < 0.001: # กรณีที่หุ่นยนต์เข้าสู่สภาวะ Singularity ทำให้ไม่สามารถคุมหุ่นยนต์ได้
        flag = True

    return flag

# Question 3
def computeEffortHW2(q,w):
    '''
        q : format list 1x3 [[i_11, i_12, i_13]]
        q unit: rad
        type something here

        return format list 1x3
        [ [i_11, i_12, i_13] ]
    '''
    R,P,R_e,p_e = FKHW2(q)
    Jaco = endEffectorJacobianHW2(q)

    # เนื่องจาก w(wrench) มีขนาด 6*1 ประกอบไปด้วย Moment ที่มีขนาด 3*1 และ Force ที่มีขนาด 3*1 เรียงต่อกันใน column ข้อมูลทั้งหมดนี้เป็น w ของ end-eff ที่เทียบกับ frame ของ end-eff 
    # ดังนั้น จึงต้องคูณด้วย Rotation matrix ที่ได้จากฟังก์ชั่น FKHW2(q) Rotation matrix มีขนาด 3*3 ทำให้ได้ข้อมูลของ w เทียบกับ Global frame โดยทำการคูณทั้งส่วนของ Moment และ Force ที่มีขนาด 3*1 ทั้งคู่
    w_new = w.copy()
    w_new[:3] = np.matmul(R_e,w[:3])
    w_new[3:] = np.matmul(R_e,w[3:])

    # คำนวณ Torqe(joint effort) จากผลคูณระหว่าง Jacobian matrix ที่ถูก Transpost ทำให้มีขนาดเป็น 3*6 กับ w ที่มีขนาด 6*1 จะทำให้ได้ Torqe ของแต่ละ joint ที่เทียบกับ Global frame
    tau = np.matmul(np.array(Jaco).T ,np.array(w_new))
    tau = tau.tolist() # เปลี่ยนจาก np.array เป็น list
    
    return tau
