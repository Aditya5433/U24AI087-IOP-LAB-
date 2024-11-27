/* WRITE A PROGRAM TO COPY ONE ARRAY INTO ANOTHER ARRAY .ORDER OF ELEMENTS OF
SECOND ARRAY SHOULD BE OPPOSITE TO FIRST ARRAY. */

#include <stdio.h>

int main()
{
    int arr1[10], arr2[10];
    int* p = arr1;

    printf("Enter 10 elements of array\n");
    for (int  i = 0; i < 10; i++)
    {
        scanf("%d", &arr1[i]);
    }
    
    for (int i = 0; i < 10; i++)
    {
        arr2[i] = *(p + 9 -i);
    }
    
    printf("The elements of 2nd array are\n");
    
    for (int i = 0; i < 10; i++)
    {
        printf("%d,", arr2[i]);
    }
    
    return 0;
}