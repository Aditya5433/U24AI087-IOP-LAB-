//program to convert temperature from fahrenheit to centigrade degrees 
#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;

    printf("temperature in celsius is %f", celsius);
    return 0;
}