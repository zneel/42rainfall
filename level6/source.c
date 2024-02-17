#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void n(void) {
  system("/bin/cat /home/user/level7/.pass");
  return;
}

void m() {
  puts("Nope");
  return;
}

int main(int argc, const char **argv, const char **envp) {
  void (**ptr)(void);
  char *dest;

  dest = malloc(64);
  ptr = malloc(sizeof(void *));
  *ptr = m;
  strcpy(dest, argv[1]);
  (*ptr)();
  return 0;
}