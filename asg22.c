//PROGRAM TO CALCULATE FACTORIAL OF A NO.
#include <stdio.h>

int main() {
    int n;
    long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Error: Factorial of negative numbers is not defined.\n");
    } else if (n == 0 || n == 1) {
        printf("Factorial of %d is 1.\n", n);
    } else {
        for (int i = 2; i <= n; i++) {
            factorial *= i;
        }
        printf("Factorial of %d is %ld.\n", n, factorial);
    }

    return 0;
}



