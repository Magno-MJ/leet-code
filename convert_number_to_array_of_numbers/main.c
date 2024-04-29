#include <stdio.h>
#include <stdlib.h>

int *convert_to_array(int value) {
  int num_places = 1;
  int base_division = 10;

  while((value / base_division) > 1 ) {
    ++num_places;
    base_division = base_division * 10;
  }
   
  int *number_array = (int *) malloc(num_places * sizeof(int));

  for (int ct = 0; ct <= num_places; ++ct) {
    number_array[ct] = value / base_division;
    value = value % base_division;
    base_division = base_division / 10;
   }

  return number_array;
}

int main(void) {
  int value = 1234;

  int *result = convert_to_array(value);

  return 0;
}


