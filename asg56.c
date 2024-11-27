/*PROGRAM TO READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NO. OF POSITIVE,
NEGATIVE, AND ZERO ELEMENTS.*/
#include <stdio.h>

int main() {
    int arr[10];
    int i, posCount = 0, negCount = 0, zeroCount = 0;

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 10; i++) {
        if (arr[i] > 0) {
            posCount++;
        } else if (arr[i] < 0) {
            negCount++;
        } else {
            zeroCount++;
        }
    }

    printf("Total Positive Numbers: %d\n", posCount);
    printf("Total Negative Numbers: %d\n", negCount);
    printf("Total Zero: %d\n", zeroCount);

    return 0;
}
