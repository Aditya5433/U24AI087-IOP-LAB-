//Write a program in C to rotate an array by N positions
#include<stdio.h>
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int position,temp;
    printf("Enter the number of positions(1-9) by which you want to rotate the array : ");
    scanf("%d",&position);

    for(int i=0 ; i<(position) ; i++){
        temp = arr[0];
        for(int j=0 ; j<9 ; j++){
            arr[j] = arr[j+1];
        }
        arr[9] = temp;
    }

    printf("After rotating the array by %d positions,we get \n",position);

    for(int i=0 ; i<10 ; i++){
        printf("%d\t",arr[i]);
    }

    return 0;
}