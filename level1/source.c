
#include <stdio.h>
#include <stdlib.h>

void run(void) {
  fwrite("Good... Wait what?\n", 1, 0x13, stdout);
  system("/bin/sh");
  return;
}

void main(void) {
  char c[76];

  gets(c);
  return;
}
