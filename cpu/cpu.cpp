#include <iostream>
#include <sched.h>
#include "cpu.h"
#include <vector>
#include <atomic>
#include <stdlib.h>
#include <unistd.h>
using namespace std;

int main()
{
  int cpus = 0;

  cpus = sysconf(_SC_NPROCESSORS_CONF);

  printf("cpus:%d",cpus);
}


























