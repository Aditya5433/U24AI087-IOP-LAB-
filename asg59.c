/*PROGRAM TO READ TWO ARRAYS OF 10 INTEGERS AND SWAP VALUES THESE
ARRAYS.*/
#include <stdio.h>

int main() {
    int arr1[10], arr2[10];

    printf("Enter 10 integers for Array 1:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter 10 integers for Array 2:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Original Arrays:\n");
    printf("Array 1: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    printf("Array 2: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        int x = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = x;
    }

    printf("Swapped Arrays:\n");
    printf("Array 1: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    printf("Array 2: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}
