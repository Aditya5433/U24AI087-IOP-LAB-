/*PROGRAM TO READ TWO NOS. AND PERFORM SPECIFIC TASK (USING ARITHMETIC 
OPERATOR)AND THIS PERFORM USING SWITCH-CASE.(CASE IN CHAR FORM)*/
#include <stdio.h>

int main() {
    int a, b;
    char operation;

    printf("Enter first number (a): ");
    scanf("%d", &a);

    printf("Enter second number (b): ");
    scanf("%d", &b);

    printf("Enter operation (+,-,*,/): ");
    scanf(" %c", &operation);

    switch(operation) {
        case '+':
            printf("%d + %d = %d\n", a, b, a + b);
            break;
        case '-':
            printf("%d - %d = %d\n", a, b, a - b);
            break;
        case '*':
            printf("%d * %d = %d\n", a, b, a * b);
            break;
        case '/':
            if(b != 0)
                printf("%d / %d = %d\n", a, b, a / b);
            else
                printf("Error: Division by zero!\n");
            break;
        default:
            printf("Error: Invalid operation!\n");
    }

    return 0;
}
