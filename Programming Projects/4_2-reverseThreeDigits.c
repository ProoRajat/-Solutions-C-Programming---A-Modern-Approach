#include <stdio.h>

int main() 
{
    int num;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    int once = num%10, tence = (num/10)%10, hundred = num/100;

    printf("The reversal is: %d", once*100 + tence*10 + hundred);
    return 0;
}