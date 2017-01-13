#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int collatz(int n);

int main(int argc, char* argv[])
{
    for(int i = 1; i <= 10000; i++)
        printf("%i: %i\n", i, collatz(i));
}

int collatz(int n)
{
    if(n == 1)
        return 0;
    if(n % 2)
        return 1 + collatz(3*n + 1);
    else
        return 1 + collatz(n/2);
}