//READ A NUMBER N AND PRINT FACTOR OF N
#include<stdio.h>
int main()
{
    int i,N;
    printf("Enter a value of N: ");
    scanf("%d",&N);   
    
    printf("Factors of %d=",N);
    
    for (i=1;i<=N; i++)
    {
        if (N%i==00)
        {
            printf("%d,",i);
        }
        
    }
    
}