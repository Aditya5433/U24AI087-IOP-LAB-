// PROGRAM TO SORT (SELECTION SORT) AN ARRAY.
#include<stdio.h>
int main(){
    int arr[] = {23,45,6,72,14,67,33};
    int swap;

    for(int i=0 ; i<7 ; i++){
        int index_of_min = i;
        for(int j=i+1 ; j<7 ; j++){
            if(arr[j] < arr[index_of_min]){
                index_of_min = j;
            }
        }
        swap = arr[i];
        arr[i] = arr[index_of_min];
        arr[index_of_min] = swap;

    }

    for(int i=0 ; i<7 ; i++){
        printf("%d\t",arr[i]);
    }
}