/* WRITE A FUNCTION THAT RETURN 1 IF ITS ARGUMENT IS PRIME NUMBER AND RETURN
ZERO OTHERWISE.*/

#include <stdio.h>

int primeORnot(int n)
{
    if ((n <= 1))
    {
        return 0;
    }else if (n == 2)
    {
        return 1;
    }else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                return 0;
            }else
            {
                return 1;
            }   
        }   
    }   
}
int main()
{
    int n;

    printf("Enter any number\n");
    scanf("%d", &n);

    int answer = primeORnot(n);

    printf("%d", answer);
    return 0;
}