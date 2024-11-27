//PROGRAM TO SORT (BUBBLE SORT) AN ARRAY.
#include<stdio.h>
int main(){
    int arr[] = {23,56,89,4,16,78,24};
    int swap;

    for(int j=0 ; j<6 ; j++){
        for(int i=0 ; i<6 ; i++){
            if(arr[i]>arr[i+1]){
            swap = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = swap;
        }
        else{
            continue;
        }
    }
    }

    for(int i=0 ; i<7 ; i++){
        printf("%d\t",arr[i]);
    }
}