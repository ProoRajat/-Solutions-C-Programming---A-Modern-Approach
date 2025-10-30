#include <stdio.h>

int main(void)
{
    int day, month, year;

    printf("Enter a day (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("You entered the day %.4d%.2d%.2d", year, month, day);
    return 0;
}