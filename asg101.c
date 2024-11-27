//WRITE A C PROGRAM TO ADD /APPEND INFORMATION TO THE FILE “LNMIITSTUDENT.DAT”.

#include <stdio.h>
#include <stdlib.h>

struct Student {
    int rollNo;
    char name[50];
    int age;
};

int main() {
    FILE *file;
    struct Student student;
    
    file = fopen("LNMIITSTUDENT.DAT", "a");
    
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }
    
    printf("Enter Student Roll Number: ");
    scanf("%d", &student.rollNo);
    getchar();
    
    printf("Enter Student Name: ");
    fgets(student.name, sizeof(student.name), stdin);
    
    printf("Enter Student Age: ");
    scanf("%d", &student.age);
    
    fprintf(file, "Roll Number: %d\n", student.rollNo);
    fprintf(file, "Name: %s", student.name);
    fprintf(file, "Age: %d\n\n", student.age);
    
    printf("Student data appended successfully.\n");
    
    fclose(file);
    
    return 0;
}