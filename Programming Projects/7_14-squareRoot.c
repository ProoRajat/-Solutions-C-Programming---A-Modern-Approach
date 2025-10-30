#include <stdio.h>
#include <math.h>

int main(void)
{
    double x, y = 1;

    printf("Enter a positive integer: ");
    scanf("%lf", &x);

    while (fabs((y + x/y)/2 - y) > 0.00001)
    {
        y = (y + x/y) / 2;
    }
    printf("Square root: %.5f\n", y);
    return 0;
}