//program to check whether a no. is even or odd
#include<stdio.h>
int main()
{
   int num ;
   printf("enter a number");
   scanf("%d" ,&num);
   if(num%2==0){
   printf("%d is a even number",num);}
   else{
   printf("%d is a odd number",num);}
   return 0;
}