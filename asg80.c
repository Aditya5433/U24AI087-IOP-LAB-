/*WRITE A FUNCTION THAT WILL GENERATE AND PRINT THE FIRST N FIBONACCI
NUBERS.*/

#include <stdio.h>

int fibonacci(int N)
{
    int t1, t2, next_term;
    t1 = 0;
    t2 = 1;

    for (int i = 0; i < N; i++)
    {
        printf("%d,", t1);
        next_term = t1 + t2;
        t1 = t2;
        t2 = next_term;
    }
    
}

int main()
{
    int N;

    printf("Enter the value of N\n");
    scanf("%d", &N);
    
    printf("Fibonacci series:\n");

    fibonacci(N);

    return 0;
}