#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *p() {
  char s[76];
  const void *v2;
  unsigned int retaddr;

  fflush(stdout);
  gets(s);
  v2 = (const void *)retaddr;
  if ((retaddr & 0xb0000000) == 0xb0000000) {
    printf("(%p)\n", v2);
    exit(1);
  }
  puts(s);
  return strdup(s);
}

int main(int argc, const char **argv, const char **envp) { return p(); }