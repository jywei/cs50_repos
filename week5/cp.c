#include <stdio.h>

char ch;
while((ch = fgetc(ptr)) != EOF)
  fputc(ch, ptr2);  // read and write to another file
