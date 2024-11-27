//program to print ASCII code of any character 
#include<stdio.h>
int main()
{
   char c ;
   printf("type any character:");
   scanf("%c" ,&c);
   printf("ASCII code of %c is %d",c ,c);
   return 0;
}