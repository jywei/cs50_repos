#include <stdio.h>

int arr[10];
fread(arr, sizeof(int), 10, ptr); // 40 bytes

// fread(<buffer>, <size>, <quantity>, <file pointer>;

double* arr2 = malloc(sizeof(double) * 80);
fread(arr2, sizeof(double), 80, ptr);

char c;
fread(&c, sizeof(char), 1, ptr); // &c is the pointer to the buffer
