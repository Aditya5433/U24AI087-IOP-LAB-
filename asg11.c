//PROGRAM TO READ TOTAL SECOND AND CONVERT IT INTO TIME
#include<stdio.h>
int main()
{
    long int total_seconds;
    int days,hours,minutes,seconds;
    printf("enter total time in seconds");
    scanf("%d" ,&total_seconds);

    days=total_seconds/(24*3600);
    hours=(total_seconds%(24*3600))/3600;
    minutes=(total_seconds%3600)/60;
    seconds=total_seconds%60;

    printf("Days:%d\n",days);
    printf("Hours:%d\n",hours);
    printf("Minutes%d\n",minutes);
    printf("Seconds%d",seconds);

    return 0;
}
