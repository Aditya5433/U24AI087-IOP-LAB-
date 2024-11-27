/*PROGRAM TO READ TWO NOS. AND CALCULATE POWER WITHOUT USING HEADER 
FILE(<MATH.H>)*/
#include <stdio.h>

int main() {
    int base, exponent;
    long result = 1;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    if (exponent < 0) {
        printf("Error: Negative exponent not supported.\n");
    } else if (exponent == 0) {
        printf("%d^%d = 1\n", base, exponent);
    } else {
        for (int i = 1; i <= exponent; i++) {
            result *= base;
        }
        printf("%d^%d = %ld\n", base, exponent, result);
    }

    return 0;
}
