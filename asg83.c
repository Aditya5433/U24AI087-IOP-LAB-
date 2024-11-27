//WRITE A FUNCTION TO READ AN ARRAY AND FOUND OUT MAXIMUM.

#include <stdio.h>

int maxOFarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element of array\n", i);
        scanf("%d", &arr[i]);
    }
    
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("Maximum of array is %d", max);
}
int main()
{
    int n;
    int arr[100];
    printf("Enter number of terms in array\n");
    scanf("%d", &n);
    
    maxOFarray(arr, n);

    return 0;
}