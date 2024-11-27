/*EARTH TAKES A PERIOD OF REVOLUTION OF 31558150 SECONDS .WRITE A C 
PROGRAM TO CONVERT THIS INTO NUMBER OF DAY,HOURS AND MINUTES*/
#include <stdio.h>

int main() {
    long int total_seconds = 31558150;
    int days, hours, minutes, seconds;

    days = total_seconds / (24 * 3600);
    hours = (total_seconds % (24 * 3600)) / 3600;
    minutes = (total_seconds % 3600) / 60;
    seconds = total_seconds % 60;

    printf("Days: %d\n", days);
    printf("Hours: %d\n", hours);
    printf("Minutes: %d\n", minutes);
    printf("Seconds: %d\n", seconds);

    return 0;
}