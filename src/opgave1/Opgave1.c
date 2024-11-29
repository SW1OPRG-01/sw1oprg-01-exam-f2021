#include <math.h>
#include <stdio.h>

int main(int argc, char **argv) {
  for(int i = 1; i < 100; i += 2) {
    printf("%d %.6f\n", i, sqrt(i));
  }
  return 0;
}