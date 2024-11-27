#include <stdio.h>

int main()
{
    float circumference;

    printf("Enter your head circumference in inches : ");
    scanf("%f",&circumference);

    printf("Your hat size is %.2f",circumference/3.14);

    return 0;
}