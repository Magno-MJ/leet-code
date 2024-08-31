#include <stdio.h>
#include <stddef.h>
#include <stdbool.h>
  #include <stdbool.h>
#include <stddef.h>

size_t count_sheep(const bool sheep[/* count */], size_t count)
{
  size_t present_count = 0;
  
  for (size_t i = 0; i < count; ++i) {
    if (sheep[i]) {
       present_count = present_count + 1;
    }
  }
  
  return present_count;
}

int main(void) {
  bool sheeps[] = {true, false, true, true};

  printf("%d\n", count_sheep(sheeps, 4));

  return 0;
}
