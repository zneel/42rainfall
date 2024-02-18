#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  printf("ShellCode address: 0x%lx\n", getenv("SHELLCODE"));
  return 0;
}