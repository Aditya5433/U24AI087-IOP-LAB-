//PROGRAM TO CALCULATE AMOUNT TO BE PAID BY CUNSUMER OF ELECTRICITY
#include<stdio.h>
int main()
{
    int Unit;
    float Amount;
    printf("Units of electricity used: ");
    scanf("%d",&Unit);

    if (Unit<=200)
    {
       Amount=Unit*0.50;
    }else if (Unit<=400&&Unit>200)
    {
       Amount=100+(Unit-200)*0.65;
    }else if (Unit<=600&&Unit>400)
    {
       Amount=230+(Unit-400)*0.80;
    }else
    {
       Amount=425+(Unit-600)*1.25;
    }
    
    printf("Total amount to be paid by consumer is %f",Amount);

    return 0;   
}
