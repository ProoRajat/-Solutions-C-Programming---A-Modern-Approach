#include <stdio.h>

int main(void)
{
    int monthDays, startingDay;

    printf("Enter number of days in month: ");
    scanf("%d", &monthDays);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &startingDay);

    for (int i = startingDay - 1 ; i > 0; i--) {
        printf("   ");
    }


    for (int i = 1; i <= monthDays; i++) {
        printf("%2d ", i);
        if ((i + startingDay - 1) % 7 == 0) {
            printf("\n");
        }
    }

    return 0;
}