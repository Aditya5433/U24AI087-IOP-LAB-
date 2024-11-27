#include<stdio.h>
int main(){
    for(int i=1 ; i<=4 ; i++){
        for(int j=1 ; j<=(3-i+1) ; j++){
            printf("%c",' ');
        }
        for(int k=1 ; k<=(2*i)-1 ; k++){
            printf("%c",'*');
        }
        printf("\n");
    }
    for(int l=3 ; l>=1 ; l--){
        for(int n=1 ; n<=(3-l+1) ; n++){
            printf("%c",' ');
        }
        for(int m=(l*2)-1 ; m>=1 ; m--){
            printf("%c",'*');
        }
        printf("\n");
    }


    return 0;
}