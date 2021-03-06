#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    long long card_number = 0;

    do
    {
        printf("What is your card number? ");
        card_number = get_long_long();
    }
    while (card_number < 0);

    // Determine whether it has a valid number of digits
    int count = 0;
    long long digits = card_number;

    // The total digits
    while (digits > 0)
    {
        digits /= 10;
        count++;
    }

    if ((count != 13) && (count != 15) && (count != 16))
        printf("INVALID\n");

    int number[count];
    for (int i = 0; i < count; i++)
    {
        number[i] = card_number % 10;
        card_number /= 10;
    }

    int original_number[count];
    for (int i = 1; i < count; i++)
        original_number[i] = number[i];

    for (int i = 1; i < count; i += 2)
        number[i] *= 2;

    int v = 0;
    int tmp;

    if (count == 13)
    {
        for (int i = 0; i < count; i++)
        {
            tmp = (number[i] % 10) + (number[i] / 10 % 10);
            v += tmp;
        }
        if ((original_number[12] == 4) && (v % 10 == 0))
            printf("VISA\n");
        else
            printf("INVALID\n");
    }

    if (count == 15)
    {
        for (int i = 0; i < count; i++)
        {
            tmp = (number[i] % 10) + (number[i] / 10 % 10);
            v += tmp;
        }
        if ((original_number[14] == 3) && (v % 10 == 0) && (original_number[13] == 4 || original_number[13] == 7))
            printf("AMEX\n");
        else
            printf("INVALID\n");
    }

    if (count == 16)
    {
        for (int i = 0; i < count; i++)
        {
            tmp = (number[i] % 10) + (number[i] / 10 % 10);
            v += tmp;
        }
        if (original_number[15] == 4 && v % 10 == 0)
            printf("VISA\n");
        else if ((original_number[15] == 5) && (v % 10 == 0) && (original_number[14] == 1 || original_number[14] == 2 || original_number[14] == 3 || original_number[14] == 4 || original_number[14] == 5))
            printf("MASTERCARD\n");
        else
            printf("INVALID\n");
    }
    return 0;
}
