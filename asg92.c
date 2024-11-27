//WRITE A C PROGRAM USING POINTERS TO FIND THE BIGGEST OF GIVEN LIST OF N INTEGERS.

#include <stdio.h>

int main()
{
    int N, biggest;
    int arr[15];
    int *ptr = arr;

    printf("Enter the value of N\n");
    scanf("%d", &N);

    printf("Enter %d integers\n", N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    biggest = arr[0];

    for (int i = 0; i < N; i++)
    {
        if (*(ptr + i) > biggest)
        {
            biggest = *(ptr + i); 
        } 
    }
    
    printf("The biggest integer is %d\n", biggest);

    return 0;
}
