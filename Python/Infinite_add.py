#!/usr/bin/python3
from sys import argv
if __name__ == "__main__":
    output = 0
    for i in argv[1:]:
        output += int(i)
    print(output)
