#include <stdio.h>

int past(int h, int m, int s) {
  return ((h * 60 + m) * 60 + s) * 1000;
}

int main(void) {
  printf("Past: %d\n", past(10, 2, 5));

  return 0;
}

