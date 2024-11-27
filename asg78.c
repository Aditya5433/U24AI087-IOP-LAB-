//WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS ARMSTRONG OT NOT.

#include <stdio.h>


int ARMSTRONGorNOT(int n){

    int oringinal_no, remainder, result = 0;
    oringinal_no = n;

    while (oringinal_no != 0)
    {
        remainder = oringinal_no % 10;
        result = result + remainder*remainder*remainder;
        oringinal_no /=10;
    }
    
    if (result == n)
    {
        printf("%d is a armstrong number", n);
    }else
    {
        printf("%d is not a armstrng number", n);
    }
}
int main ()
{
    int n ;
    printf("Enter a number :");
    scanf("%d", &n);

    ARMSTRONGorNOT(n);
    return 0;
}