// includes
#include <stdio.h>

// function declarations
int add_two_ints(int a, int b);

int main(void)
{
    int result = add_two_ints(30, -20);
    printf("%i\n", result);
}

int add_two_ints(int a, int b)
{
    int sum = 0;
    
    // add a to sum
    if(a > 0)
       for(int i = 0; i < a; sum++, i++);
    else
       for(int i = a; i < 0; sum--, i++);

    // add b to sum
    if(b > 0)
       for(int i = 0; i < b; sum++, i++);
    else
       for(int i = b; i < 0; sum--, i++);
    
    return sum;
}
