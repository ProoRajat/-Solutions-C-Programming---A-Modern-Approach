#include <stdio.h>

int main(void)
{
    long double num;

    printf("Enter a positive integer: ");
    scanf("%Lf", &num);

    for (int i = num - 1; i > 0; i--)
    {
        num *= i;
    }

    printf("Factorial: %Lf\n", num);

    // least values for which overflow occurs:
    // a) short int - 8
    // b) int       - 13
    // c) long int  - 13 (on my system)
    // d) long long int - 21
    // e) float     - 35
    // f) double    - 171
    // g) long double - 171 (on my system)
    return 0;
}