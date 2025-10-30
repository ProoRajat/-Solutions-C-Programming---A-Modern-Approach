#include <stdio.h>

int main() 
{
    int digit1, digit2, digit3;
    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &digit1, &digit2, &digit3);

    printf("The reversal is: %d", digit3*100 + digit2*10 + digit1);
    return 0;
}