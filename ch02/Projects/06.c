/* Compute the value of f(x) from a user defined input using Horner's Rule. */

#include <stdio.h>

int main(void)
{
    float x;

    printf("Enter a value for x: ");
    scanf("%f", &x);

    printf("f(x) = %.2f\n", ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6);

    return 0;
}
