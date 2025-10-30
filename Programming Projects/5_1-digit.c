#include <stdio.h>

// assumption: number has 4 digits

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number >= 0 && number <= 9) {
    printf("The number %d has 1 digits", number);
    } else if (number <= 99) {
    printf("The number %d has 2 digits", number);
    } else if (number <= 999) {
    printf("The number %d has 3 digits", number);
    } else if (number <= 9999) {
    printf("The number %d has 4 digits", number);
    }
    return 0;
}