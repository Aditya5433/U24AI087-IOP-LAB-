/*WRITE A PROGRAM TO CALCULATE THE SQUARE AND CUBE OF AN ENTERED NUMBER USING
POINTER OF A VARIABLE CONTAINING THE ENTERED NUMBER.*/

#include <stdio.h>
#include <math.h>

int main()
{
    float n, square, cube;
    float *ptr = &n;
    printf("Enter any number\n");
    scanf("%f", &n);
    
    square = pow(*ptr,2.0);
    cube = pow(*ptr,3.0);
    
    printf("The square of number is %.0f\n", square);
    printf("The cube of number is %.0f\n", cube);
    return 0;
}