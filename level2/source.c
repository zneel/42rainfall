#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *p() {
  char s[76];
  void *v2;
  void *retaddr;

  fflush(stdout);
  // IEP should be overwritten with the return address from strdup and jump on a
  // heap address.
  gets(s);
  v2 = retaddr;
  // Prevent the buffer overflow to overwrite the return address on the stack.
  if (((unsigned int)retaddr & 0xb0000000) == 0xb0000000) {
    printf("(%p)\n", v2);
    exit(1);
  }
  puts(s);
  return strdup(s);
}

int main(int argc, const char **argv, const char **envp) {
  p();
  return 0;
}