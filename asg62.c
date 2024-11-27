//PROGRAM TO REVERSE AN ARRAY.
#include <stdio.h>

void reverseArray(int arr[], int n) {
    int i = 0, end = n - 1, x;
    while (i < end) {
        x = arr[i];
        arr[i] = arr[end];
        arr[end] = x;
        i++;
        end--;
    }
}

int main() {
    int arr[1000], n, i;
    printf("Enter array size : ");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    reverseArray(arr, n);
    printf("Reversed Array: ");
    for (i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}
