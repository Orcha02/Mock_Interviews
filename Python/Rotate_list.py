#!/usr/bin/python3
def rotate_left_list(my_list=[], number_rotation=0):
    final_list = my_list()

   # for i in range(number_rotation):
        
    my_list = my_list[number_rotation:]

    final_list = list(my_list)

    return final_list
