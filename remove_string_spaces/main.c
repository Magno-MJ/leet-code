#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *no_space(const char *str_in) {
  int len = 0;
  int idx = 0;

  while(str_in[idx] != '\0') {
    if (str_in[idx] != ' ') {
      ++len;
    };

    ++idx;
  };
  
  char *new_str = (char*)malloc(sizeof(char) * (len + 1));
  
  int aux_ct = 0;

  for (int ct = 0; ct < len; ++ct) {
    if (str_in[aux_ct] != '\0') {
      if (str_in[aux_ct] != ' ') {      
        new_str[ct] = str_in[aux_ct];
      } else {
        --ct;
      }   
    }
    ++aux_ct; 
  };
  
  new_str[len] = '\0';

  return new_str;
}

int main(void) {
  printf("%s\n", no_space("testing testing"));
  return 0;
}
