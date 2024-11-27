//PROGRAM TO READ MARKS OF FIVE SUBJECT AND PRINT DIVISION
#include<stdio.h>
int main()
{
    int eng,maths,phy,che,bio,total;
    float percentage;

    printf("Enter marks of 5 subjects");
    scanf("%d%d%d%d%d",&eng,&maths,&phy,&che,&bio);
    total=eng+maths+phy+che+bio;
    printf("Total marks:%d\n",total);

    percentage=total/5;
    printf("Percentage:%f\n",percentage);
    
    if(percentage>=90){
        printf("Grade A");
    }else if(percentage>=80){
        printf("Grade B");
    }else if(percentage>=70){
        printf("Grade C");
    }else if(percentage>=60){
        printf("Grade D");
    }else if(percentage>=50){
        printf("Grade E");
    }else if(percentage>=35){
        printf("Grade F");
    }else{
        printf("You are Fail");
    }

    return 0;
}
