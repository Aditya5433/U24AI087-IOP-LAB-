//PROGRAM TO READ N NOS AND FINDOUT MAX AND SECOND MAX.
#include <stdio.h>

int main() {
    int n, i;
    int arr[1000];

    printf("Enter number of elements (N): ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0], secondMax = -999999;
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            secondMax = max;
            max = arr[i];
        } else if (arr[i] > secondMax && arr[i] != max) {
            secondMax = arr[i];
        }
    }

    printf("Maximum: %d\n", max);
    if (secondMax != -999999) {
        printf("Second Maximum: %d\n", secondMax);
    } else {
        printf("No second maximum exists\n");
    }

    return 0;
}
