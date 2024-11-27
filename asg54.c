//PROGRAM TO READ AND ARRAY OF 10 INTEGER AND PRINT SUM OF NUMBERS.
#include <stdio.h>

int main() {
    int arr[10];
    int sum = 0;

    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++) {
        sum += arr[i];
    }

    printf("Sum: %d\n", sum);

    return 0;
}
