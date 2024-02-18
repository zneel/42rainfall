#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int language;

void greetuser(char src) {
  char dest[76];

  switch (language) {
  case 1:
    strcpy(dest, "Hyvää päivää ");
    break;
  case 2:
    strcpy(dest, "Goedemiddag! ");
    break;
  case 0:
  default:
    strcpy(dest, "Hello ");
    break;
  }
  strcat(dest, &src);
  puts(dest);
}

int main(int argc, const char *argv[], const char *envp[]) {
  char dest[76];
  char v4[76];
  char *v6;

  if (argc != 3) {
    return 1;
  }

  memset(dest, 0, sizeof(dest));
  strncpy(dest, argv[1], 40);
  strncpy(dest + 40, argv[2], 32);

  v6 = getenv("LANG");
  if (v6) {
    if (memcmp(v6, "fi", 2) == 0) {
      language = 1;
    } else if (memcmp(v6, "nl", 2) == 0) {
      language = 2;
    }
  }
  memcpy(v4, dest, sizeof(v4));
  greetuser(v4[0]);
  return 0;
}