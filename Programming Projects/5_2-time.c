#include <stdio.h>

int main()
{
    int hour, minute;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    if (hour > 0 && hour <= 12) {
        printf("Equivalent 12-hour time: %d:%d AM", hour, minute);
    } else if (hour >= 12 && hour <= 24) {
        printf("Enquivalent 12-hour time: %d:%d PM", hour - 12, minute);
    } else if (hour == 0) {
        printf("Enquivalent 12-hour time: %d:%d PM", 12, minute);
    } else {
        printf("WRONG FORMATE");
    }
}