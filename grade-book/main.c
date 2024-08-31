#include <stddef.h>
#include <stdio.h>

char get_grade(int a, int b, int c) {
    size_t m = (a + b + c) / 30;
    return "ABCDF"[(m < 9) + (m < 8) + (m < 7) + (m < 6)];
}

int main(void) {
  printf("Grade: %c\n", get_grade(10, 3, 5));

  return 0;
}
