/*PROGRAM TO READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NO OF ODD AND
TOTAL NO. OF EVEN ELEMENT.*/
#include <stdio.h>

int main() {
    int arr[10];
    int i, oddCount = 0, evenCount = 0;

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 10; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("Total Odd Numbers: %d\n", oddCount);
    printf("Total Even Numbers: %d\n", evenCount);

    return 0;
}
