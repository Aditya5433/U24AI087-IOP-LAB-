//WRITE A C PROGRAM TO DEFINE A MACRO TO FIND BIGGEST NUMBER OF TWO GIVEN NUMBERS.

#include <stdio.h>

#define max(a, b) ((a) > (b) ? (a) : (b))

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("The biggest number is: %d\n", max(num1, num2));

    return 0;
}