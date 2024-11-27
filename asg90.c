/*WRITE A PROGRAM TO FIND LENGTH OF A GIVEN STRING INCLUDING AND EXCLUDING SPACES
USING POINTERS.*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[30];
    char *ptr = str;
    int spaces = 0;
    printf("Enter a string\n");
    fgets(str,30,stdin);
    
    for (int i = 0; i < strlen(str) - 1; i++)
    {
        if (ptr[i] == ' ')
        {
            spaces++;
        }
    }
    
    printf("Length including spaces is %d\n", strlen(ptr) - 1);
    printf("Length excluding spaces is %d\n", strlen(ptr) - 1 - spaces);
    
    return 0;
}