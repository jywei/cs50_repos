#include <stdio.h>

FILE* ptr1 = fopen("file1.txt", "r");

FILE* ptr2 = fopen("file2.txt", "w");
// write or rewrite
FILE* ptr3 = fopen("file3.txt", "a");
// append in the end

fclose(ptr1);

char ch1 = fgetc(ptr1);
// file get the first character of the file, reads, and read only, then returns the next character from the file pointed to
char ch2 = fgetc(ptr2);
// this will return errors
