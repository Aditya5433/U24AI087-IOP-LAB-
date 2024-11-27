/*PROGRAM TO READ THREE NOS. AND PRINT MAX USING CONDITIONAL (? :) 
OPERATOR*/
#include <stdio.h>

int main() {
    int a, b, c, max;

    printf("Enter value of a ");
    scanf("%d", &a);
    printf("Enter value of b ");
    scanf("%d", &b);
    printf("enter value of c ");
    scanf("%d", &c);

    max = (a >= b) ? (a >= c ? a : c) : (b >= c ? b : c);

    printf("Maximum number is: %d\n", max);

    return 0;
}

