#include <stdio.h>

int main(void) {
    int day, month, year;
    int latestday = 0, latestMonth = 0, latestYear = 0;

    while (1) {
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &month, &day, &year);
        if (year == 0 && month == 0 && day == 0) {
            break;
        }

        if (latestYear == 0 && latestMonth == 0 && latestday == 0) {
            latestday = day;
            latestMonth = month;
            latestYear = year;
        } else if (year > latestYear || (year == latestYear && month > latestMonth) || (year == latestYear && month == latestMonth && day > latestday)) {
            latestday = day;
            latestMonth = month;
            latestYear = year;
        }
        
    }

    printf("Latest date entered: %d/%d/%d\n", latestMonth, latestday, latestYear);
    return 0;
}