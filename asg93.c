//WRITE A C PROGRAM USING POINTER TO COUNT THE NUMBERS OF WORDS IN A GIVEN STRING.

#include <stdio.h>
#include <string.h>
 
int main()
{
    char str[30];
    char *ptr = str;
    int count = 0;
    
    printf("Enter a string\n");
    fgets(str, 30, stdin);
    
    for (int i = 0; i < strlen(str) - 1; i++)
    {
        if (*(ptr + i) == ' ')
        {
            count++;
        }
        
    }
    printf("The number of words are %d", count + 1);
    
    return 0;
}