/*************************************************
 * loops.c
 * 
 * Doug Lloyd
 * 
 * Demonstrates that most uses of loops are interchangeable
 * by having each type count to 10
 * 
 * ***********************************************/

#include <stdio.h>

// how high to count
#define MAX 10

int main(void)
{
    int counter = 0;
    
    // while
    printf("While loop 1 to %i:\n", MAX);
    while (counter < MAX)
    {
        counter++;
        printf("%i ", counter);
    }
    
    printf("\n\n");
    
    // do-while
    counter = 0;
    printf("Do-while loop 1 to %i:\n", MAX);
    do
    {
        counter++;
        printf("%i ", counter);
    }
    while(counter < MAX);
    
    printf("\n\n");
    
    // for
    printf("For loop 1 to %i:\n", MAX);
    for(counter = 1; counter <= MAX; counter++)
    {
        printf("%i ", counter);
    }
    
    printf("\n\n");
}