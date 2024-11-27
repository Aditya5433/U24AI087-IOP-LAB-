//The annual examination results of 10 students are tabulated
#include<stdio.h>
    struct student{
        int roll_no;
        int sub1;
        int sub2;
        int sub3;
    };

int main(){
    struct student marks[10];
    int total_marks[10];
    int max1=0,max2=0,max3=0,total_max=0;
    int roll1,roll2,roll3,a;


    for(int i=0 ; i<10 ; i++){
        printf("Enter the roll no <in numbers> of student %d : ",i+1);
        scanf("%d",&marks[i].roll_no);
        printf("Enter the marks of subject 1 : ");
        scanf("%d",&marks[i].sub1);
        printf("Enter the marks of subject 2 : ");
        scanf("%d",&marks[i].sub2);
        printf("Enter the marks of subject 3 : ");
        scanf("%d",&marks[i].sub3);
    }

    for(int i=0 ; i<10 ; i++){
        total_marks[i] = marks[i].sub1 + marks[i].sub2 + marks[i].sub3;
    }


    for(int i=0 ; i<10 ; i++){
        if(marks[i].sub1>max1){
            max1=marks[i].sub1;
            roll1=marks[i].roll_no;
        }
        if(marks[i].sub2>max2){
            max2=marks[i].sub2;
            roll2=marks[i].roll_no;
        }
        if(marks[i].sub3>max3){
            max3=marks[i].sub3;
            roll3=marks[i].roll_no;
        }
    }

    for(int j=0 ; j<10 ; j++){
        if(total_marks[j]>total_max){
            total_max=total_marks[j];
            a=j;
        }
    }

    printf("Highest marks in subject 1 is %d and it is obtained by roll no %d\n",max1,roll1);
    printf("Highest marks in subject 2 is %d and it is obtained by roll no %d\n",max2,roll2);
    printf("Highest marks in subject 3 is %d and it is obtained by roll no %d\n",max3,roll3);


    printf("The total highest mark is %d and is obtained by roll no %d",total_max,marks[a].roll_no);
}