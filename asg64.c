//PROGRAM TO READ A 3*3 MATRIX AND PRINT SUM OF ALL ROWS.
#include <stdio.h>

int main() {
    int matrix[3][3], i, j, rowSum;

    printf("Enter 9 integers for 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++) {
        rowSum = 0;
        for (j = 0; j < 3; j++) {
            rowSum += matrix[i][j];
        }
        printf("Sum of Row %d: %d\n", i + 1, rowSum);
    }

    return 0;
}
