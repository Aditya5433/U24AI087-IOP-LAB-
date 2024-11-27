#include<stdio.h>

int isFibo(int x, int arr[50])
{
    for (int  i = 0; i < 50; i++)
    {
        if (x == arr[i])
        {
            return 1;
        }
    }  
    return 0;
}

int main()
{
    int N, arr[50];
    printf("Enter the value of N\n");
    scanf("%d", &N);
    int num[N];
    printf("Enter %d numbers\n", N);
    for (int  i = 0; i < N; i++)
    {
        scanf("%d", &num[i]);
    }

    int fib1 = 0, fib2 = 1;
    for (int i = 2; i < 50; i++)
    {
        arr[0] = 0;
        arr[1] = 1;
        int next_term = fib1 + fib2;
        fib1 = fib2;
        fib2 = next_term;
        arr[i] = fib2;
    }
    
    for (int  j = 0; j < N; j++)
    {
       int a = num[j];
       
       if (isFibo(a,arr) == 1)
       {
           printf("IsFibo\n");
       }else if(isFibo(a,arr) == 0)
       {
           printf("IsNotFibo\n");
       }  
    }
    return 0;
}