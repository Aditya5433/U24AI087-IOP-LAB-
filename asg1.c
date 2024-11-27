//program to calculate simple interest 
#include<stdio.h>
int main()
{
  float  p , r , t , si ;
  p=10000 ;
  r=8 ;
  t=3 ;
  si=(p*r*t)/100 ;
  printf("simple interest=%f",si);
  return 0;
}