//PROGRAM TO PRINT 1,4,9,16,25,………N
#include <stdio.h>

int main() {
    int N, i;

    printf("Enter a number (N): ");
    scanf("%d", &N);

    printf("Squares of numbers from 1 to %d:\n", N);
    for(i = 1; i*i <= N; i++) {
        printf("%d\n", i * i);
    }

    return 0;
}
