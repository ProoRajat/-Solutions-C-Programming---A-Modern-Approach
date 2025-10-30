#include <stdio.h>

int main(void)
{
    int number, reverseNumber = 0;

    printf("Enter an number: ");
    scanf("%d", &number);

    while (number != 0) {
        reverseNumber *= 10;
        reverseNumber += number%10;
        number /= 10;
    }

    printf("Revese: %d", reverseNumber);
    
    return 0;
}