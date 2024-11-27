/*WRITE A C PROGRAM TO FIND THE PRODUCT OF 2 MATRICES USING POINTER USING DYNAMIC
MEMORY ALLOCATION.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **arr1 = (int **)calloc(3, sizeof(int *));
    int **arr2 = (int **)calloc(3, sizeof(int *));
    int **arr3 = (int **)calloc(3, sizeof(int *));
    
    
    for (int i = 0; i < 3; i++) {
        arr1[i] = (int *)calloc(3, sizeof(int));
        arr2[i] = (int *)calloc(3, sizeof(int));
        arr3[i] = (int *)calloc(3, sizeof(int));
    }

    printf("Enter elements of matrix A\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr1[i][j]);
        } 
    }

    printf("Enter elements of matrix B\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr3[i][j] = 0;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }   
        }  
    }
    
    printf("Result matrix C:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++) {
        free(arr1[i]);
        free(arr2[i]);
        free(arr3[i]);
    }
    free(arr1);
    free(arr2);
    free(arr3);
    
    return 0;
}