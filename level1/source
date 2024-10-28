
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void run(void) {
  fwrite("Good... Wait what?\n", 1, 0x13, stdout);
  system("/bin/sh");
  return;
}

int main(void) {
  char c[76];

  gets(c);
  return 0;
}
