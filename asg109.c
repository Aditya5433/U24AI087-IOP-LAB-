/*MODIFY VALUE STORED IN OTHER VARIABLE USING A POINTER IN C
A. INITIALIZE THE POINTER WITH THE OTHER (A NORMAL VARIABLE WHOSE VALUE WE HAVE TO
MODIFY)*/

#include <stdio.h>

int main()
{
    int a = 7;
    int *ptr = &a;

    printf("Initial value of variable a is %d\n", a);

    *ptr = 91;

    printf("Modified value of variable a is %d\n", a);

    return 0;
}