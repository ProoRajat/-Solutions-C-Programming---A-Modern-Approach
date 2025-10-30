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

    printf("You entered %d:%d\n", hour, minute);
    
    return 0;
}
