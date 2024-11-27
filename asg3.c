//program to calculate gross salary
#include<stdio.h>
int main()
{
   float basic_salary , da , hra , gross_salary ;
   printf("enter basic salary :") ;
   scanf("%f" ,&basic_salary);
   da=0.1*basic_salary; //assuming 10 % DA
   hra=0.15*basic_salary; //assuming 15 % HRA
   gross_salary= basic_salary+da+hra ;
   printf("gross salary is %f\n" , gross_salary);
   return 0;
}