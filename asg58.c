/*PROGRAM TO READ TWO ARRAYS OF 10 INTEGERS AND STORE ADDITION OF THOSE
ARRAYS INTO THIRD.*/
#include <stdio.h>

int main() {
    int arr1[10], arr2[10], arr3[10];
    int i;

    printf("Enter 10 integers for Array 1:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter 10 integers for Array 2:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr2[i]);
    }

    for (i = 0; i < 10; i++) {
        arr3[i] = arr1[i] + arr2[i];
    }

    printf("arr3 Array: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    return 0;
}
