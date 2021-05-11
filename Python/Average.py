#!/usr/bin/python3
def average(my_list=[]):
    if my_list is None:
        return 0
    return sum(my_list) / len(my_list)
