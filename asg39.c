//PROGRAM TO PRINT 1/1!+2/2!+3/3!+4/4!,………N
#include <stdio.h>

int main() {
    int N;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("Series: ");
    for (int i = 1; i <= N; i++) {
        int fact = 1.0;
       
        printf("%d/%d! + ", i, i);
    }

    return 0;
}

