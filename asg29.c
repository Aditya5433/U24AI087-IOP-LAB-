//PROGRAM TO CHECK WHETHER A NO IS PALINDROM OR NOT
#include <stdio.h>

int main() {
    int num, originalNum, remainder, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        reverse = reverse * 10 + remainder;
        originalNum /= 10;
    }

    if (reverse == num)
        printf("%d is a palindrome number.\n", num);
    else
        printf("%d is not a palindrome number.\n", num);

    return 0;
}
