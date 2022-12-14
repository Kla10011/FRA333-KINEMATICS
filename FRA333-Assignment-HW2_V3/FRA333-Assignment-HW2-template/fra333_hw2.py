#!/usr/bin/python3
import numpy as np
import math
from HW2_utils import FKHW2

'''
    Name:   <NAME> <SURNAME> <ID>
            <NAME> <SURNAME> <ID>
    Date:   <DD-MM-YY>
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
    R,P,R_e,p_e = FKHW2(q)
    zjj = np.array([[0],[0],[1]])
    z0j = np.zeros((1,3))
    J_linear = np.zeros((1,3))
    J_e = np.zeros((2,1))
    for j in range(3):
        z0j[0][j] = R[j]@zjj
        J_linear[0][j] = np.cross(zjj,(p_e-P[j]))
    
    J_e[0][0] = z0j
    J_e[1][0] = J_linear

    return J_e
    
    

# Question 2
def checkSingularityHW2(q):
    '''
        q : format list 1x3 [[i_11, i_12, i_13]]
        q unit: rad
        type something here
        
        return format bool
    '''

# Question 3
def computeEffortHW2(q,w):
    '''
        q : format list 1x3 [[i_11, i_12, i_13]]
        q unit: rad
        type something here

        return format list 1x3
        [ [i_11, i_12, i_13] ]
    '''
