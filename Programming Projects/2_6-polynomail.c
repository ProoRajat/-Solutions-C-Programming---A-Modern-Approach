// this program uses Horner's method to compute the value of polynomial

#include <stdio.h>

int main(void)
{
    int x;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    int polynomialValue = ((((3*x + 2)*x - 5)*x - 1)*x + 7)*x - 6;

    printf("Value of polynomial is: %d", polynomialValue);

    return 0;
}