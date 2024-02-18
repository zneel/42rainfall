#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int ac, char **av) {
  int i;
  char buff[40];
  int number;

  number = atoi(av[1]);
  if (number < 10) {
    memcpy(buff, av[2], number * 4);
    if (number == 0x574f4c46) {
      execl("/bin/sh", "sh", 0);
    }
    i = 0;
  } else {
    i = 1;
  }
  return i;
}
