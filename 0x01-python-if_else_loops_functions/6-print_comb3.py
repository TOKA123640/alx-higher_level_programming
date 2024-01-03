#!/usr/bin/python3
for i in range(0, 10):
    for y in range(1, 10):
        if i >= y:
            continue
        elif i == 8 and y == 9:
            print("{}{}".format(i, y))
        else:
            print("{}{}, ".format(i, y), end="")
