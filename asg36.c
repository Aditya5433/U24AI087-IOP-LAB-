//PROGRAM TO PRINT 1,3,5,7,9………N
#include <stdio.h>

int main() {
    int N,i;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        if (i % 2 != 0) {
            printf("%d,", i);
        }
    }

    return 0;
}
