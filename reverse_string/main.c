#include <stdio.h>
#include <string.h>
//m a g n o

//o n g a m
char* reverse_string(char *string) {
  int len = strlen(string);
  
  int last = len - 1;

  int first = 0;
  
  while (1) {
    if (last - first == 1 || last == first) {
      break;
    }

    char tmp = string[first];
    
    string[first] = string[last];

    string[last] = tmp;
    
    ++first;
    --last;
  }
  
  printf("%s\n", string);
}

int main(void) {
  char t[] = "magno";
  reverse_string(t);

  return 0;
}
