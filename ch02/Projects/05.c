/* Compute the value of f(x) from a user defined input. */

#include <stdio.h>

int main(void)
{
    float x, x_5, x_4, x_3, x_2, polynomial;

    printf("Enter a value for x: ");
    scanf("%f", &x);

    x_5 = x * x * x * x * x;
    x_4 = x * x * x * x;
    x_3 = x * x * x;
    x_2 = x * x;

    polynomial = (3 * x_5) + (2 * x_4) - (5 * x_3) - (x_2) + (7 * x) - 6;

    printf("f(x) = %.2f\n", polynomial);

    return 0;
}
