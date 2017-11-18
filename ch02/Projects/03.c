#include <stdio.h>

#define PI 3.14f
#define DIVISION_FACTOR (4.0f / 3.0f)

int main(void)
{
    int radius_cubed, radius;
    float volume;

    printf("Enter radius of the sphere: ");
    scanf("%d", &radius);

    radius_cubed = radius * radius * radius;
    volume = DIVISION_FACTOR * PI * radius_cubed;

    printf("The volume of a sphere with a %d-meter radius is ~%.2fm^2.\n", radius, volume);

    return 0;
}
