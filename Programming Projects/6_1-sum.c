#include <stdio.h>

int main(void)
{
    float number, largestNumber = 0;
    while (1) {
        printf("Enter a number: ");
        scanf("%f", &number);

        largestNumber =  largestNumber < number ? number : largestNumber;
        if (number == 0) {
            break;
        }
    }

    printf("The largest number entered was %0.2f", largestNumber);
    return 0;
}