//PROGRAM TO READ THREE NOS. AND PRINT MAX USING LOGICAL OPERATOR (&&)
#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter value a ");
    scanf("%d", &a);
    printf("Enter value of b ");
    scanf("%d", &b);
    printf("Enter value of c ");
    scanf("%d", &c);

    if ((a >= b) && (a >= c)) {
        printf("Maximum number is: %d\n", a);
    } else if ((b >= a) && (b >= c)) {
        printf("Maximum number is: %d\n", b);
    } else {
        printf("Maximum number is: %d\n", c);
    }

    return 0;
}


