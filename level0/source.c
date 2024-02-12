
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int ac, char **av) {
  int av1;
  char *sh;
  int x;
  __uid_t uid;
  __gid_t gid;

  av1 = atoi(av[1]);
  if (av1 == 423) {
    sh = strdup("/bin/sh");
    x = 0;
    gid = getegid();
    uid = geteuid();
    setresgid(gid, gid, gid);
    setresuid(uid, uid, uid);
    execv("/bin/sh", &sh);
  } else {
    fwrite("No !\n", 1, 5, (FILE *)stderr);
  }
  return 0;
}