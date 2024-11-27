//WRITE A FUNCTION EXCHANGE TO INTERCHANGE THE VALUE OF TWO VARIALBLE ,SAY X AND Y

#include <stdio.h>

void EXCHANGE(int X ,int  Y)
{
    int temp;
    
    temp = X;
    X = Y;
    Y = temp;

    printf("The value of X is %d\n", X);
    printf("The value of Y is %d\n", Y);

}

int main()
{
    int X, Y;
    printf("Enter the values of X and Y:\n");
    scanf("%d %d", &X, &Y);

    EXCHANGE(X , Y);

    return 0;
}