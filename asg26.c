//PROGRAM TO PRINT SUM OF ALL ODD AND EVEN NO B/W 1 TO N
#include<stdio.h>
int main()
{
    int n,sum_odd=0,sum_even=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        if(i%2==0){
            sum_even +=i;
        }else{
            sum_odd +=i;
        }
    }

    printf("Sum of odd numbers=%d\n",sum_odd);
    printf("Sum of even numbers=%d\n",sum_even);

    return 0;

}