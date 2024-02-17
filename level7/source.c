#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

char c[68];

void m() {
  time_t t;

  t = time((time_t *)NULL);
  printf("%s - %d\n", c, t);
  return;
}

struct s {
  int a;
  void *heap_space;
};

int main(int ac, char **av) {
  struct s *s1;
  void *var2;
  struct s *s2;
  FILE *__stream;

  s1 = malloc(8);
  s1->a = 1;
  var2 = malloc(8);
  s1->heap_space = var2;
  s2 = malloc(8);
  s2->a = 2;
  var2 = malloc(8);
  s2->heap_space = var2;
  strcpy(s1->heap_space, av[1]);
  strcpy(s2->heap_space, av[2]);
  __stream = fopen("/home/user/level8/.pass", "r");
  fgets(c, 68, __stream);
  puts("~~");
  return 0;
}
