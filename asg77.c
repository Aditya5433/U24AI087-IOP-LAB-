//WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS PALINDROME OR NOT.

#include <stdio.h>

int PALINDROMEorNOT(int n)
{
     int original_no, remainder,reversed_no=0;
     original_no = n;

     while (original_no != 0)
     {
        remainder = original_no % 10;
        reversed_no = reversed_no*10 + remainder;
        original_no /= 10;
     }

     if (reversed_no == n)
     {
        printf("%d is a palindrome ", n);
     }else{
        printf("%d is not a palindrome ", n);
     }
}
int main ()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);

    PALINDROMEorNOT(n);

    return 0;
}