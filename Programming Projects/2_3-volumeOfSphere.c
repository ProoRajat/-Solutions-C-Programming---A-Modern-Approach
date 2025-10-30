#include <stdio.h>
#define PI 3.14f

int main(void)
{
    int radius;

    printf("Enter the radius of Sphere: ");
    scanf("%d", &radius);

    float volume = 4.0f / 3.0f * PI * radius * radius * radius;
    
    printf("The Volume of sphere is: %.2f", volume);
    return 0;
}