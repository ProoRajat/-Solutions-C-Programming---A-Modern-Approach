#include <stdio.h>

int main(void) 
{
    int hour, minute, departureTime[8] = {8 * 60, 9 * 60 + 43, 11 * 60 + 19, 12 * 60 + 47, 14 * 60, 15 * 60 + 45, 19 * 60, 21 * 60 + 45}, arrivalTime[8] = {10 * 60 + 16, 11 * 60 + 52, 13 * 60 + 31, 15 * 60, 16 * 60 + 8, 17 * 60 + 55, 21 * 60 + 20, 23 * 60 + 58};

    printf("Enter time(24-hour) to find flight time: ");
    scanf("%d:%d", &hour, &minute);

    int totalMinutes = hour * 60 + minute;
    for (int i = 0; i < 8; i++) {
        int nextDeparture = (i < 7) ? departureTime[i+1] : arrivalTime[i];
        if (totalMinutes >= departureTime[i] && totalMinutes < nextDeparture) {
            printf("Departure Time: %d:%02d %s, ", departureTime[i] / 60 % 12 == 0 ? 12 : departureTime[i] / 60 % 12, departureTime[i] % 60, departureTime[i] < 12 * 60 ? "a.m." : "p.m.");
            printf("Arrival Time: %d:%02d %s", arrivalTime[i] / 60 % 12 == 0 ? 12 : arrivalTime[i] / 60 % 12, arrivalTime[i] % 60, arrivalTime[i] < 12 * 60 ? "a.m." : "p.m.");
            return 0;
        }
    }

    printf("No flight found");
    
    return 0;
}