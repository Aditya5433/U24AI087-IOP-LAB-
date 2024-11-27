/*) An election is contested by 5 candidates. The candidate is numbered are 1 to 5 
and the voting is done by marking the candidate number on the ballot paper. 
Write a program to read the ballots and count the votes cast for each candidate 
using an array variable count. In case, a number, read is outside the range 1 to 5, 
the ballot should be considered as a ‘spoilt ballot’ and the program should also 
count the number of spoilt ballots*/


#include<stdio.h>
int main(){
    int n,can1=0,can2=0,can3=0,can4=0,can5=0,spoilt_ballot=0;
    printf("Enter the number of voters : ");
    scanf("%d",&n);


    int votes[n];


    for(int i=0 ; i<n ; i++){
        printf("Give your vote(%d) by entering an appropriate number : ",i+1);
        scanf("%d",&votes[i]);
    }

    for(int j=0 ; j<n ; j++){
        if(votes[j]==1){
            can1+=1;
        }
        else if(votes[j]==2){
            can2+=1;
        }
        else if(votes[j]==3){
            can3+=1;
        }
        else if(votes[j]==4){
            can4+=1;
        }
        else if(votes[j]==5){
            can5+=1;
        }
        else{
            spoilt_ballot+=1;
        }
    }


    printf("Votes for candidate 1 are : %d\n",can1);
    printf("Votes for candidate 2 are : %d\n",can2);
    printf("Votes for candidate 3 are : %d\n",can3);
    printf("Votes for candidate 4 are : %d\n",can4);
    printf("Votes for candidate 5 are : %d\n",can5);
    printf("And the number of spoilt votes are : %d",spoilt_ballot);
}