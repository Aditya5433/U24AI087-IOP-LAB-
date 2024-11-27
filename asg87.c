/*WRITE A PROGRAM TO READ INFORMATION OF 10 STUDENT AND DISPLAY THE
INFORMATION OF THOSE STUDENT WHOSE MARKS ARE GREATHER THAN 500.(PASSING
ARRAY OF STRUCTURE INTO FUNCTION).*/

#include <stdio.h>

struct student{
    char name[100];
    int roll_no;
    int marks;
};

void readStundetInfo(struct student students[])
{
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the name of student %d\n", i + 1);
        scanf("%s", &students[i]);
    
        printf("Enter the roll no of student %d\n", i + 1);
        scanf("%d", &students[i].roll_no);
        
        printf("Enter the marks of student %d\n", i + 1);
        scanf("%d", &students[i].marks);
    }
}
void DisplayInformatin(struct student students[])
{
    for (int j = 0; j < 10; j++)
    {
        if (students[j].marks >= 500)
        {
            printf("Name : %s\n", students[j].name);
            printf("Roll no : %d\n", students[j].roll_no);
            printf("Marks : %d\n", students[j].marks);
            printf("\n");
        }   
    } 
}
int main()
{
    struct student students[10];

    printf("Enter information of 10 students\n");
    readStundetInfo(students);

    printf("The information of students who got 500 + marks:\n");

    DisplayInformatin(students);
    return 0;
}