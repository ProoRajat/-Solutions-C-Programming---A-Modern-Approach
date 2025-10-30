#include <stdio.h>
#include <ctype.h>

int main(void) 
{
    int hour, minute;
    char ch1, ch2;

    printf("Enter time(12-hour) to find flight time: ");
    scanf("%d:%d%c%c", &hour, &minute, &ch1, &ch2);

    if (toupper(ch1) == 'P') {
        hour += 12;
    } else if (ch1 == ' ' && toupper(ch2) == 'P') {
        hour += 12;
    }

    int totalMinutes = hour * 60 + minute;
    if (totalMinutes >= 8 * 60 && totalMinutes < 9 * 60 + 43) {
        printf("Departure Time: 8:00 a.m., ");
        printf("Arrival Time: 10:16 a.m.");
    } else if (totalMinutes >= 9 * 60 + 43 && totalMinutes < 11 * 60 + 19) {
        printf("Departure Time: 9:43 a.m., ");
        printf("Arrival Time: 11:52 a.m.");
    } else if (totalMinutes >= 11 * 60 + 19 && totalMinutes < 12 * 60 + 47) {
        printf("Departure Time: 11:19 a.m., ");
        printf("Arrival Time: 1:31 p.m.");
    } else if (totalMinutes >= 12 * 60 + 47 && totalMinutes < 14 * 60) {
        printf("Departure Time: 12:47 p.m., ");
        printf("Arrival Time: 3:00 p.m.");
    } else if (totalMinutes >= 14 * 60 && totalMinutes < 15 * 60 + 45) {
        printf("Departure Time: 2:00 p.m., ");
        printf("Arrival Time: 4:08 p.m.");
    } else if (totalMinutes >= 15 * 60 + 45 && totalMinutes < 19 * 60) {
        printf("Departure Time: 3:45 p.m., ");
        printf("Arrival Time: 5:55 p.m.");
    } else if (totalMinutes >= 19 * 60 && totalMinutes < 21 * 60 + 45) {
        printf("Departure Time: 7:00 p.m., ");
        printf("Arrival Time: 9:20 p.m.");
    } else if (totalMinutes >= 21 * 60 + 45 && totalMinutes < 23 * 60 + 58) {
        printf("Departure Time: 9:45 p.m., ");
        printf("Arrival Time: 11:58 p.m.");
    } else {
        printf("No Flight Found");
    }
    
    return 0;
}