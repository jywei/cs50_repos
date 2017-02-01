#include <stdio.h>

char ch;
while((ch = fgetc(ptr)) != EOF) // EOF == end of file character
  printf("%c", ch);
  // fputc(ch, ptr2);
