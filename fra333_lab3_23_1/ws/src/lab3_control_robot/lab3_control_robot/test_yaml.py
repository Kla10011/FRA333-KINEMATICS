import yaml
import numpy as np

def Line(p_ori,p_goal):
    Scale = 1
    offset_x = 0
    offset_y = 0
    stream = open("via_point.yaml", 'r')
    via = yaml.load(stream)
    diff = np.array(via[str(p_goal)]) - np.array(via[str(p_ori)])
    print(diff)

def Draw_character(Char):

    if Char == 'F':
        Line("p1","p3")
        Line("p3","p5")
        Line("p2","p4")
    elif Char == 'I':
        Line("p6","p8")
        Line("p7","p10")
        Line("p9","p11")
    elif Char == 'B':
        Line("p9","p11")
        Line("p9","p11")
        Line("p9","p11")
    # elif Char == 'O':
    #     ad = 1
    else:
        pass


if __name__ == '__main__':
    Draw_character("F")
    # for key, value in dictionary.items():
    #     x = value[0]
    #     y = value[1]
    #     List_Position = [offset_x+(Scale*x),offset_y+(Scale*y)]
    #     # print (value)
    #     # print(List_Position)
    #     print (key + " : " + str(List_Position))