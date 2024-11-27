//PROGRAM TO PRINT 2,4,6,8,10,12………N
#include <stdio.h>

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    for (int i = 2; i <= N; i++) {
        if (i % 2 == 0) {
            printf("%d,", i);
        }
    }

    return 0;
}

