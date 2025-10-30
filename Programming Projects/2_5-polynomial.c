#include <stdio.h>

int main(void)
{
    int x;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    int polynomialValue = (3*x*x*x*x*x) + (2*x*x*x*x) - (5*x*x*x) - (x*x) + (7*x) - 6;

    printf("Value of polynomial is: %d", polynomialValue);

    return 0;
}