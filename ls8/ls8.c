#include <stdio.h>
#include "cpu.h"
#include <stdlib.h>

/**
 * Main
 */
int main(int argc, char *argv[])
{
  if (argc != 2)
  {
    fprintf(stderr, "\nfilename.ls8\n");
    return 1;
  }
  struct cpu cpu;

  cpu_init(&cpu);
  cpu_load(&cpu, *argv);
  cpu_run(&cpu);

  return 0;
}