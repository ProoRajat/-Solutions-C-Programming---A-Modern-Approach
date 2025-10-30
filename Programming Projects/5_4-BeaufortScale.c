#include <stdio.h>


int main(void)
{
    float windSpeed;
    printf("Enter the wind speed(knots): ");
    scanf("%f", &windSpeed);

    if (windSpeed < 1) {
        printf("Calm");
    } else if (windSpeed < 4) {
        printf("Light air");
    } else if (windSpeed < 28) {
        printf("Breeze");
    } else if (windSpeed < 48) {
        printf("Gale");
    } else if (windSpeed < 64) {
        printf("Storm");
    } else {
        printf("Hurricane");
    }
    return 0;
}