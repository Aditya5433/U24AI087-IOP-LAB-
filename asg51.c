#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of lines upto which you want to print the pattern : ");
    scanf("%d",&n);

    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=n ; j++){
            if(j<i){
                printf("0");
            }
            if(j==i){
                printf("1");
            }
            if(j>i){
                printf("0");
            }
        }
        printf("\n");
    }


    return 0;
}