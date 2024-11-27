//program to read marks of 5 subjects and calculate total and percentage 
#include<stdio.h>
int main ()
{ 
   float eng , maths , phy , che , bio , total , percentage ;
   printf("enter marks in eng") ;
   scanf("%f" ,&eng);
   printf("enter marks in maths") ;
   scanf("%f" ,&maths) ;
   printf("enter marks in phy") ;
   scanf("%f" ,&phy) ;
   printf("enter marks in che") ;
   scanf("%f" ,&che) ;
   printf("enter marks in bio") ;
   scanf("%f" ,&bio) ;
   total = (eng+maths+phy+che+bio);
   percentage= total/5.0 ;
   printf("Total marks are : %f\n",total);
   printf("percentage is %f" , percentage);
   return 0;
}