//C PROGRAM TO CALCULATE THE COMMISSION
#include<stdio.h>
int main()
{
    float Sales,Commission;
    printf("Enter total Sales: ");
    scanf("%f",&Sales);

    if(Sales<=500){
        Commission=Sales*0.05;
    }else if (Sales>500&&Sales<=2000) {
       Commission=35+(Sales-500)*0.1;
    }else if(Sales>2000&&Sales<=5000){
        Commission=185+(Sales-2000)*0.12;
    }else{
        Commission=Sales*0.125;
    }

    printf("Total commission is: %f",Commission);

     return 0;
}