//program to calculate area of triangle 
#include<stdio.h>
int main()
{
   float base , height , area ;
   printf("enter value of base");
   scanf("%f" ,&base);
   printf("enter value of height");
   scanf("%f" ,& height);
   area=base*height/2 ;
   printf("area of triangle is %f" ,area);
   return 0;
}