#include <stdio.h>

int main(void)
{
    int num1, deno1, num2, deno2;
    char operator;

    printf("Enter the fractions separated by a maths operator sign: ");
    scanf("%d/%d%c%d/%d", &num1, &deno1, &operator, &num2, &deno2);

    switch (operator)
    {
    case '+':
        printf("The sum is: %d/%d", num1*deno2 + num2*deno1, deno1*deno2);
        break;
    case '-':
        printf("The difference is: %d/%d", num1*deno2 - num2*deno1, deno1*deno2);
        break;
    case '*':
        printf("The product is: %d/%d", num1*num2, deno1*deno2);
        break;
    case '/':
        printf("The quotient is: %d/%d", num1*deno2, deno1*num2);
        break;
    default:
        break;
    }
    return 0;
}