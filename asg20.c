//PROGRAM WHICH WILL WORK LIKE A SIMPLE CALCULATOR USING SWITCH-CASE
#include<stdio.h>
int main()
{
    char c;
    int a,b;
    printf("Enter any operation ");
    scanf("%c",&c);

    printf("Enter two operands ");
    scanf("%d%d",&a,&b);

    switch(c) {
        case '+' :
            printf("%d+%d=%d",a,b,a+b);
            break;
        case '-' :
            printf("%d-%d=%d",a,b,a-b);
            break;
        case '*' :
            printf("%d*%d=%d",a,b,a*b);
            break;
        case '/' :
            printf("%d/%d=%d",a,b,a/b);
            break;
        default :
            printf("Operater is incorrect");    
    }

    return 0;
}