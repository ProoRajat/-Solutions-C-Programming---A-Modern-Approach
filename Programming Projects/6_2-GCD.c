#include <stdio.h>

int main(void)
{
    int num1, num2;
    
    printf("Enter two integers: ");
    scanf("%d%d", &num1, &num2);
    
    int temp;

    while (num2 != 0) {
        temp = num2;
        num2 = num1%num2;
        num1 = temp;
    }

    printf("Greatest common divisor: %d", num1);
    return 0;
}