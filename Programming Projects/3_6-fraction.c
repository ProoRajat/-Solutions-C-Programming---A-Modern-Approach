#include <stdio.h>

int main(void)
{
    int num1, deno1, num2, deno2;

    printf("Enter the faractions separated by a plus sign: ");
    scanf("%d/%d+%d/%d", &num1, &deno1, &num2, &deno2);

    int sumNum = num1*deno2 + num2*deno1, sumDeno = deno1*deno2;
    printf("The sum is: %d/%d", sumNum, sumDeno);
    return 0;
}