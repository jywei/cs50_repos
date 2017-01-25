#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int minutes = get_int();
    printf("minutes: ");

    if (minutes > 0)
    {
        int bottles = ( 128 * (1.5 * minutes) ) / 16;
        printf("bottles: %d\n", bottles);
    }
    else
    {
        printf("Number must be an integer\n");
    }
}
