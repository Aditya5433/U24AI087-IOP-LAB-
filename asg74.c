/*Given are one dimensional arrays A and B which are sorted in ascending order. 
Write a program to merge them into a single sorted array C that contains every 
item form array A and B, in ascending order.*/
#include<stdio.h>
int main(){
    int A[] = {12,29,41,79,90};
    int B[] = {23,38,49,76,101};
    int C[10];
    int swap;

    for(int i= 0 ; i<5 ; i++){
        C[i] = A[i];
        C[i+5] = B[i];
    }
    
    for(int i=0 ; i<10 ; i++){
        int index_of_min = i;
        for(int j=i+1 ; j<10 ; j++){
            if(C[j] < C[index_of_min]){
                index_of_min = j;
            }
        }
        swap = C[i];
        C[i] = C[index_of_min];
        C[index_of_min] = swap;
    }

    for(int i=0 ; i<10 ; i++){
        printf("%d\t",C[i]);
    }
}