/*PROGRAM TO READ AN ARRAY AND PRINT THE OCCURRENCE OF ANY PARTICULAR
ELEMENT IN THE ARRAY.*/
#include <stdio.h>

int main() {
    int arr[1000], n, i, target, count = 0;

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
            count++;
        }
    }

    printf("Element %d occurs %d times.\n", target, count);

    return 0;
}

