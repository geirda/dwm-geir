#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>

int main(int argc, char * const argv[]) {
  if (argc < 2) {
    fprintf(stderr, "Usage: %s <command> [args...]\n", argv[0]);
    return  EXIT_FAILURE;
  }

  execvp(argv[1], argv + 1);

  fprintf(stderr, "Could not execute %s: %s\n", argv[1], strerror(errno));

  return EXIT_FAILURE;
}
