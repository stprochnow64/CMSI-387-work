import mmap
import os
import contextlib

# HW #4

# open file
file = open('file.txt')

# map file to virtual memory
fileInMemory = mmap.mmap(file.fileno(), 0, access=mmap.ACCESS_READ)

# read through file
if (fileInMemory.find(b'X') == -1):
    print('X was not found')
    exit()
else:
    print('X was found!')
    exit()
