//WRITE A C PROGRAM TO SORT THE GIVEN N NUMBER OF STRINGS IN ASCENDING ORDER USING POINTERS.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int N;

    printf("Enter the number of strings\n");
    scanf("%d", &N);

    char *arr[N];

    printf("Enter %d strings\n", N);

    for (int i = 0; i < N; i++)
    {
        arr[i] = (char *)malloc(50 * sizeof(char));
        scanf("%s", arr[i]);
    }
    
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (strcmp(arr[i], arr[j]) > 0)
            {
                char * temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            
        }
        
    }
    
    printf("The sorted strings are\n");

    for (int i = 0; i < N; i++)
    {
        printf("%s\n", arr[i]);
        free(arr[i]);
    }
    
    return 0;
}