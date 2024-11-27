/*PROGRAM TO READ A CHARACTER AND CHECK WHETHER IT IS A SMALL CASE 
LETTER OR NOT USING CONDATIONAL OPERATOR*/

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("%c is %s\n", ch, (ch >= 'a' && ch <= 'z') ? "a small case letter" : "not a small case letter");

    return 0;
}
