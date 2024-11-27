//WRITE A PROGRAM TO COPY ELEMENT OF ONE ARRAY TO ANOTHER ARRAY USING POINTERS.

#include <stdio.h>

int main()
{
    int arr1[10];
    int arr2[10];
    int* p = arr1;
    
    printf("Enter the 10 elements of array\n");
    for (int  i = 0; i < 10; i++)
    {
        scanf("%d", &arr1[i]);
    }
    
    for (int  i = 0; i < 10; i++)
    {
        arr2[i] = *(p + i);
    }

    printf("The elements of 2nd array are\n");
    
    for (int i = 0; i < 10; i++)
    {
        printf("%d,", arr2[i]);
    }
    
    return 0;
}