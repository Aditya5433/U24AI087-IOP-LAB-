//PROGRAM TO CHECK WHETHER A NO IS PRIME OR NOT
#include<stdio.h>
int main()
{
    int n,check=0;
    printf("Enter a positive number : ");
    scanf("%d",&n);
    if(n==1){
        printf("It is neither prime nor composite");
    }
    if(n==2){
        printf("It is a prime number");
    }
    for(int i=2 ; i<n ; i++){
        if(n%i==0){
            check=1;
            break;
        }  
    }
    if(check==1&&n!=1&&n!=2){
        printf("It is not a prime number");
    }
    if(check==0&&n!=1&&n!=2){
        printf("It is a prime number");
    }
}

