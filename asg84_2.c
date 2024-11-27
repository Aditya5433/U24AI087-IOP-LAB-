/*WRITE A FUNCTION TO READ INFORMATION OF BOOK AND DISPLAY THE INFORMATION
USING POINTER TO STRUCTURE.*/

#include <stdio.h>

struct book {
    char title[100];
    char auther[100];
    char publisher[100];
    int year;
    int price;
};
void readInfo(struct book *book)
{
    printf("Enter the title of the book\n");
    gets(book->title);
    printf("Enter the name of auther of the book\n");
    gets(book->auther);
    printf("Enter the name of publisher of the book\n");
    gets(book->publisher);
    printf("Enter the year of publication of the book\n");
    scanf("%d", &book->year);
    printf("Enter the price of the book\n");
    scanf("%d", &book->price);
}
void displayInfo(struct book *book)
{
    printf("The title of book: %s\n", book->title);
    printf("Auther of book: %s\n", book->auther);
    printf("Publisher of book: %s\n", book->publisher);
    printf("Year: %d\n", book->auther);
    printf("Price: %d\n", book->price);
}
int main()
{
    struct book book;
    struct book *ptr = &book;

    readInfo(ptr);
    displayInfo(ptr);
    return 0;
}