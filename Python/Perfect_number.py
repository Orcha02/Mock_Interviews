#!/usr/bin/python3
def findPerfect(arr):
    arr.sort(reverse=True)
    print(arr)
    current_streak = 0
    for i in range(len(arr)):
        current_streak += 1
        if i == len(arr) - 1 or arr[i] != arr[i + 1]:
            if arr[i] == current_streak:
                return arr[i]
            current_streak = 0
    return -1
x
arr = [7, 2, 7, 8, 1, 2, 3, 4, 5, 3, 4, 4, 7, 4, 3, 7, 8, 7, 7, 7]
print(findPerfect(arr))
