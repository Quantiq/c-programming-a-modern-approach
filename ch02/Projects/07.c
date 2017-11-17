/* Compute the smallest way to pay using $20, $10, $5 and $1 bills. */

#include <stdio.h>

int main(void)
{
    int amount, twenties, tens, fives, ones;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    twenties = amount / 20;
    tens = (amount - (twenties * 20)) / 10;
    fives = ((amount - (twenties * 20)) - (tens * 10)) / 5;
    ones = ((amount - (twenties * 20)) - (tens * 10)) - (fives * 5);

    printf("$20 bills: %d\n", twenties);
    printf("$10 bills: %d\n", tens);
    printf(" $5 bills: %d\n", fives);
    printf(" $1 bills: %d\n", ones);

    return 0;
}
