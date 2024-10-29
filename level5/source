#include <stdio.h>
#include <stdlib.h>

void o(void) {
  system("/bin/sh");
  exit(1);
}

void n(void) {
  char str[520];

  fgets(str, 0x200, stdin);
  printf(str);
  exit(1);
}

int main(void) {
  n();
  return 0;
}