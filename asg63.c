//PROGRAM TO READ A 3*3 MATRIX AND FINDOUT MAX AND MIN ELEMENT.
#include <stdio.h>

int main() {
    int matrix[3][3], i, j, max, min;

    printf("Enter 9 integers for 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    max = matrix[0][0];
    min = matrix[0][0];

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
            if (matrix[i][j] < min) {
                min = matrix[i][j];
            }
        }
    }

    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}
