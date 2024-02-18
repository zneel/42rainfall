#include <stdio.h>
#include <string.h>
#include <unistd.h>

char *p(char *dest, char *s) {
  char buf[4104];

  puts(s);
  read(0, buf, 0x1000u);
  char *c = strchr(buf, 10);
  if (c)
    *c = 0;
  return strncpy(dest, buf, 20);
}

char *pp(char *dest) {
  char src[20];
  char v3[28];

  p(src, " - ");
  p(v3, " - ");
  strcpy(dest, src);
  dest[strlen(dest)] = ' ';
  int i = 0;
  int j = strlen(dest);
  while (src[i]) {
    dest[j++] = src[i++];
  }
  dest[j] = 0;
  return dest;
}

int main(int argc, const char **argv, const char **envp) {
  char s[42];

  pp(s);
  puts(s);
  return 0;
}