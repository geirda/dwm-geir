#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(int argc, char * const argv[]) {
  int status;
  pid_t pid;

  if (argc < 2) {
    fprintf(stderr, "Usage: %s <command> [args...]\n", argv[0]);
    return  EXIT_FAILURE;
  }

  if ((pid = fork()) == 0) {
    // Child process
    execvp(argv[1], argv + 1);
    fprintf(stderr, "Could not execute %s: %s\n", argv[1], strerror(errno));
    return EXIT_FAILURE;
  }
  else if (pid < 0) {
    // Error
    fprintf(stderr, "Could not fork: %s\n", strerror(errno));
    return EXIT_FAILURE;
  }

  if (waitpid(pid, &status, 0) == -1) {
    fprintf(stderr, "Could not wait for child: %s\n", strerror(errno));
    return EXIT_FAILURE;
  }

  return WIFEXITED(status) ? WEXITSTATUS(status) : EXIT_FAILURE;
}
