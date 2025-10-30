#include <stdio.h>

int main() 
{
    int num;
    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    int once = num%10, tence = num/10;

    printf("The reversal is: %d", once*10 + tence);
    return 0;
}