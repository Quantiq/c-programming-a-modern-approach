#include <stdio.h>

#define PI 3.14f
#define DIVISION_FACTOR (4.0f / 3.0f)

int main(void)
{
    int radius_cubed;
    float volume;

    radius_cubed = 10 * 10 * 10;
    volume = DIVISION_FACTOR * (PI * radius_cubed);

    printf("The volume of a sphere with a 10-meter radius is ~%.2fm^2.\n", volume);

    return 0;
}
