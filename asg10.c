//WRITE A C PROGRAM TO CALCULATE THE CUT OFF MARK OF A STUDENT 
#include<stdio.h>
int main()
{
    int M,P,C,E,CM;

    printf("Enter marks in maths ");
    scanf("%d",&M);
    printf("Enter marks in physics ");
    scanf("%d",&P);
    printf("Enter marks in chemistry ");
    scanf("%d",&C);
    printf("Enter marks in entrance examination ");
    scanf("%d",&E);

    CM=M/2+P/2+C/2+E ;

    printf("Cut off marks of student:%d",CM);

    return 0;
}
