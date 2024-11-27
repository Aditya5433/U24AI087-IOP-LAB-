//PROGRAM TO FINDOUT MAX AND MIN FROM ‘N’ NOS
#include<stdio.h>
int main() {
    int n, max, min;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers: ", n);
    scanf("%d", &max);
    min = max;

    for (int i = 1; i < n; i++) {
        int num;
        scanf("%d", &num);

        if (num > max) {
            max = num;
        } else if (num < min) {
            min = num;
        }
    }

    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}
