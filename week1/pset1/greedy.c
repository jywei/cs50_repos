#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float given_amount = 0;
    int cent_amount = 0;
    int quarter_count = 0;
    int dime_count = 0;
    int nickel_count = 0;
    int leftover = 0;
    int coin_count = 0;

    do
    {
        printf("How much I should give back to you (ex: 0.41 in dollars): $");
        given_amount = get_float();

        if (given_amount == 0 || given_amount <= 0)
        {
            printf("Amount given should be greater then 0\n:");
        }
    }
    while (given_amount <= 0);

    cent_amount = (int)round(given_amount * 100);

    // Quarters
    quarter_count = cent_amount / 25;
    leftover = cent_amount % 25;

    // Dimes
    dime_count = leftover / 10;
    leftover = leftover % 10;

    // Nickels
    nickel_count = leftover / 5;
    leftover = leftover % 5;

    coin_count = quarter_count + dime_count + nickel_count + leftover;

    printf("You get %d coins: %d quarters (25¢), %d dimes (10¢), %d nickels (5¢) and %d pennies (1¢).\n", coin_count, quarter_count, dime_count, nickel_count, leftover);
    printf("%d\n", coin_count);

    return 0;
}
