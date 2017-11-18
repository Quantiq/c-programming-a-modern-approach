#include <stdio.h>

int main(void)
{
    int gs1_pr, g_id, p_code, i_no, c_digit;

    printf("Enter ISBN: ");
    scanf("%d -%d -%d -%d -%d", &gs1_pr, &g_id, &p_code, &i_no, &c_digit);

    printf("GS1 prefix: %d\n", gs1_pr);
    printf("Group identifier: %d\n", gs1_pr);
    printf("Publisher code: %d\n", p_code);
    printf("Item number: %d\n", i_no);
    printf("Check digit: %d\n", c_digit);

    return 0;
}
