//PROGRAM TO FINDOUT MAX AND SECOND MAX FROM ‘N’ NOS
#include <stdio.h>

int main() {
    int n, max, second_max;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers: ", n);
    scanf("%d", &max);
    second_max = max;

    for (int i = 1; i < n; i++) {
        int num;
        scanf("%d", &num);

        if (num > max) {
            second_max = max;
            max = num;
        } else if (num > second_max && num != max) {
            second_max = num;
        }
    }

    printf("Maximum: %d\n", max);
    printf("Second Maximum: %d\n", second_max);

    return 0;
}