/*************************************************
 * array_scope.c
 * 
 * Doug Lloyd
 * 
 * Demonstrates arrays are not passed by value (making a copy)
 * but rather by reference (passing the actual array)
 * 
 * ***********************************************/

#include <stdio.h>

#define SIZE 4

// function declarations (prototypes)
void set_array(int array[SIZE]);
void set_int(int x);

int main(void)
{
    int a = 10;
    int b[SIZE] = { 0, 1, 2, 3 };
    
    set_int(a);
    set_array(b);
    
    printf("%d %d\n", a, b[0]);
}

// will change the actual array elements
void set_array(int array[SIZE])
{
    array[0] = 22;
}

// will only change its own local copy; main's "a" untouched
void set_int(int x)
{
    x = 22;
}