/*IMPLEMENT A FUNCTION NAMED AS FLIP; WHICH WILL TAKE A NUMBER AS INPUT AND FLIP ITS
LAST N DIGITS
FOR EXAMPLE FLIP(123, 2)= 132 ; (HERE N=2) FLIP(12345,3)= 12543 (HERE N=3).*/

#include <stdio.h>

int flip(int num, int N) {
    int divisor = 1;
    for (int i = 0; i < N; i++) {
        divisor *= 10;
    }

    int last_n_digits = num % divisor;
    int remaining_digits = num / divisor;

    int flipped_last_n_digits = 0;
    while (last_n_digits > 0) {
        flipped_last_n_digits = flipped_last_n_digits * 10 + last_n_digits % 10;
        last_n_digits /= 10;
    }

    return remaining_digits * divisor + flipped_last_n_digits;
}

int main() {
    int num, N;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the number of digits to flip: ");
    scanf("%d", &N);

    printf("The number with the last %d digits flipped is: %d\n", N, flip(num, N));

    return 0;
}
