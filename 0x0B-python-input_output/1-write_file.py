#!/usr/bin/python3
"""defining write_file with two argments"""

def write_file(filename="", text=""):
    """reads filename with utf-8"""
    with open(filename, "w", encoding="UTF-8") as f:
        return f.write(text)
