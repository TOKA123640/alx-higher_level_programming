#!/usr/bin/python3
def remove_char_at(str, n):
    newStr = ""
    for x in range(len(str)):
        if x == n:
            continue
        else:
            newStr += str[x]
    return newStr
