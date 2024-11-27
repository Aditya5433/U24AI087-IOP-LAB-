//WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS EVEN OR ODD.

#include <stdio.h>

int ODDorEVEN(int n){
    if ((n % 2) == 0)
    {
        printf("%d is a Even number", n);
    }else
    {
        printf("%d is a Odd number", n);
    }

}

int main ()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);

    ODDorEVEN (n);

    return 0;
}