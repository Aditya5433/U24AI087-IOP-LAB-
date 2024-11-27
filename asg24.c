//C PROGRAM TO FIND THE VALUE
#include<stdio.h> 
#include<math.h>
int main()
{
    int x,Y,n;
    printf("Enter the value of x ");
    scanf("%d",&x);
    printf("Enter the value of n ");
    scanf("%d",&n);

    if (n==1)
    {
        Y=1+x;
    }else if (n==2)
    {
        Y=1+x/n;
    }else if (n==3)
    {
        Y=1+(pow(x,n));
    }else
    {
        Y=1+n*x;
    }
    
    printf("Y=%d",Y);

    return 0;
}