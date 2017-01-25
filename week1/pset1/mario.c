#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    int height = 0;

    do
    {
        printf("height of the pyramid (smaller than 23 and greater than 1): \n");
        height = get_int();
    } while (height > 23 || height < 1);

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < (height - i - 1); j++)
        {
            printf("%s", " ");
        }
        for (int k = 0; k < (i + 2); k++)
        {
            printf("%s", "#");
        }
        printf("\n");
    }
    return 0;
}
