//LUCKY NUMBER..
#include<stdio.h>
int main(){
    int lucky_number = 91;
    int num;
    
    do{
        printf("Enter a number between 1-100 and try your luck : ");
        scanf("%d",&num);

        if(num == lucky_number){
            printf("Congrats! You have guessed the correct number\n");
            break;
        }
        
        else{
            printf("Your guess is not right .... Try Again\n");
        }
        
    }while(1);
}