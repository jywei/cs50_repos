/**
 * increment.c
 *
 * Doug Lloyd
 * lloyd@cs50.harvard.edu
 *
 * Demonstrates a variable scope problem
 */

#include <stdio.h>

// prototype
int increment(int x);

int main(void)
{
    int x = 1;
    int y;
    y = increment(x);
    printf("x is %i, y is %i\n", x, y);
}

int increment(int x)
{
    x++;
    return x;
}