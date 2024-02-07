#!/usr/bin/python3
"""defining read_file function"""

def read_file(filename=""):

    with open(filename, "r", encoding="UTF-8") as f:
        print(f.read(), end="")
