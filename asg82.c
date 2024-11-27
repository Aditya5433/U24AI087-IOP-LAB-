/*WRITE A FUNCTION TO CALCULATE (NCR) FACTORIAL OF A GIVEN NUMBERS.
NCR = (!N/(!R*!(N-R)))*/

#include <stdio.h>

int NCR(int N ,int R)
{
    int a = 1, b = 1, c = 1, NCR;

    for (int i = 1; i <= N; i++)
    {
        a *= i;
    }

    for (int j = 1; j <= R; j++)
    {
        b *= j; 
    }
    
    for (int k = 1; k <= (N - R); k++)
    {
        c *= k;
    }
    
    NCR = a / (b * c);

    return NCR;
}

int main()
{
    int N, R, result;
    printf("Enter the values of N and R\n");
    scanf("%d%d", &N, &R);

    if (N == R)
    {
        printf("The value of NCR is 1");
    }else if (N < R)
    {
        printf("Value of R cannot be greater than N");
    }else
    {
        printf("The value of NCR is %d", NCR(N , R));
    }
    return 0;
}