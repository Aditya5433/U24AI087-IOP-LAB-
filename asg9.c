//program to read time in HR, MIN, SEC and convert it into tatal Second 
#include<stdio.h>
int main()
{
   int hr , min , sec , total_sec ;
   printf("enter time in hours:");
   scanf("%d" ,&hr);
   printf("enter time in minutes:");
   scanf("%d" ,&min);
   printf("enter time in seconds:");
   scanf("%d" ,&sec);
   total_sec=hr*3600+min*60+sec ;
   printf("total seconds are :%d" ,total_sec);
   return 0;
}