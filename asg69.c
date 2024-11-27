//PROGRAM TO PERFORM LINEAR SEARCH ON AN ARRAY.
#include <stdio.h>

int main() {
    int arr[1000], n, i, target;

    printf("Enter array size : ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter target element: ");
    scanf("%d", &target);

    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("Target element %d found at index %d.\n", target, i);
            return 0; 
        }
    }

    printf("Target element %d not found.\n", target);

    return 0;
}
