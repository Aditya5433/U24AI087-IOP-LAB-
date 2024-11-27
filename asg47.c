#include <stdio.h>

int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    int ch = 'A';
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            printf("%c", ch + j);
        }
        printf("\n");
        ch = 'A';
    }

    return 0;
}

