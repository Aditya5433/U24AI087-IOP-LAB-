// WRITE A FUNCTION TO READ INFORMATION OF BOOK AND DISPLAY THE INFORMATION.

#include <stdio.h>

void printInfo(char title[], char auther[], char publisher[], int year, int price)
{
    printf("The title of book: %s\n",title);
    printf("Auther of book: %s\n", auther);
    printf("Publisher of book: %s\n", publisher);
    printf("Year: %d\n", year);
    printf("Price: %d\n", price);
}
int main()
{
    char title[100], auther[100], publisher[100];
    int year, price; 

    printf("Enter the title of the book\n");
    gets(title);
    printf("Enter the name of auther of the book\n");
    gets(auther);
    printf("Enter the name of publisher of the book\n");
    gets(publisher);
    printf("Enter the year of publication of the book\n");
    scanf("%d", &year);
    printf("Enter the price of the book\n");
    scanf("%d", &price);

    printInfo(title, auther, publisher, year, price);

    return 0;
}