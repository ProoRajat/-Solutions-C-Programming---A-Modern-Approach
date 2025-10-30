#include <stdio.h>

int main(void)
{
    float num1, num2, num3, result;
    char operator1, operator2;

    printf("Enter an expression: ");
    scanf("%f%c%f%c%f", &num1, &operator1, &num2, &operator2, &num3);

    switch (operator1)
    {
    case '+':
        result = num1 + num2;
        break;

    case '-':
        result = num1 - num2;
        break;

    case '*':
        result = num1 * num2;
        break;

    case '/':
        if (num2 != 0)
            result = num1 / num2;
        else
            printf("Error: Division by zero\n");
        break;
    }

    switch (operator2)
    {
    case '+':
        result += num3;
        break;

    case '-':
        result -= num3;
        break;

    case '*':
        result *= num3;
        break;

    case '/':
        if (num3 != 0)
            result /= num3;
        else
            printf("Error: Division by zero\n");
        break;
    }

    printf("The value of the expression is: %.1f\n", result);

    return 0;
}