#!/usr/bin/python3
"""defining read_file function"""

def read_file(filename=""):
    """reads filename with UTF-8"""
    with open(filename, 'r', encoding='UTF8') as f:
        print(f.read(), end="")
