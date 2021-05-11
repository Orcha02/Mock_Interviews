#!/usr/bin/python3
average = __import__('Average').average
my_list = [1, 2, 3, 4]
result = average(my_list)
print("Average: {:0.2f}".format(result))
