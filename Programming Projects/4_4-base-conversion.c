#include <stdio.h>

int main() 
{
    int decimal;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &decimal);

    // printf("In octal, your number is: %.5o", decimal);

    int octal = 0, place = 1;
    while (decimal != 0)
    {
        octal = octal + (decimal % 8) * place;
        decimal /= 8;
        place *= 10;
    }

    printf("In octal, your number is: %.5d", octal);

    return 0;
}