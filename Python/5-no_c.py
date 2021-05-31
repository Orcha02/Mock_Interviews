#!/usr/bin/env python3
def no_c(my_string):
    the_new_string = ''
    for char in my_string:
        if char == 'C' or char == 'c':
            continue
        the_new_string = the_new_string + char
    return the_new_string

print(no_c("Holberton School"))
print(no_c("Chicago"))
print(no_c("C is fun!"))
