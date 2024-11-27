/*WRITE A C PROGRAM TO DECLARE A STRUCTURE WITH DATA MEMBERS EMPLOYEE NUMBER,
EMPLOYEE NAME AND BASIC PAY OF THE EMPLOYEE. DECLARE A STRUCTURE POINTER AND AN
ARRAY EMPLOY WITH 50 ELEMENTS .THE PROGRAM SHOULD READ ‘N’ EMPLOYEE DETAILS AND
PRINT THE LIST OF ALL EMPLOYEE ALONG WITH THE BASIC A PAY.*/

#include <stdio.h>

struct employee{
    int employee_number;
    char employee_name[30];
    int basic_pay;
};

int main()
{
    int N;
    printf("Enter the number of employees\n");
    scanf("%d", &N);
    struct employee *ptr;
    struct employee EMPLOYEE[50];

    for (int i = 0; i < N; i++)
    {
        ptr  = &EMPLOYEE[i];
        printf("Enter the details for employee %d\n",i + 1);
        printf("Enter employee number\n");
        scanf("%d", &ptr->employee_number);
        printf("Enter the name of employee\n");
        scanf("%s", &ptr->employee_name);
        printf("Enter the basic pay of employee\n");
        scanf("%d", &ptr->basic_pay);
    }
    
    for (int i = 0; i < N; i++)
    {
        ptr = &EMPLOYEE[i];

       printf("Employee number:%d\n", ptr->employee_number);
       printf("Employee name:%s\n", ptr->employee_name);
       printf("Basic pay:%d\n", ptr->basic_pay);
       printf("\n");
    }
    
    return 0;
}