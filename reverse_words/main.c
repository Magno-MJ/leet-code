#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* reverse_words(char *text) {
  char *ret = calloc(strlen(text) + 1, sizeof(char)), *q = ret;
  int word_len = 0;

  for (char *p = text; ; p++) {
    if (*p == ' ' || *p == '\0') {
      for (int i = 0; i < word_len; i++) *q++ = *(p - 1 - i);
      if ((*q++ = *p) == '\0') break;
      word_len = 0;
    } else word_len++;
  }

  return ret;
}

int main(void) {
  printf("%s\n", reverse_words("teste testou")); 
  return 0;
}
