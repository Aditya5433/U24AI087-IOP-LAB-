/*PROGRAM TO READ NUMBERS TILL A NEGATIVE NUMBER IS ENTERED AND CALCULATE SUM OF A 
LIST OF NUMBERS READ*/
#include<stdio.h>
int main()
{
    int num , sum=0;

    printf("Enter numbers (Enter negative number to stop): ");

    while (num){
       scanf("%d",&num);
       if (num<0)
       {
         break;
       }
       sum +=num;
    }
     printf("Sum of the numbers: %d",sum);

     return 0;
}