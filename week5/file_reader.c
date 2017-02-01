#include <stdio.h>

char ch;
while((ch = fgetc(ptr)) != EOF)
  printf("%c", ch);
