//WRITE A PROGRAM TO COPY A STRING IN REVERSE ORDER TO ANOTHER STRING VARIABLE USING POINTERS

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[30];
    char *ptr = str1;
    

    printf("Enter a string\n");
    fgets(str1, 30, stdin);
    
    char str2[strlen(str1)];

    for (int i = 0; i < strlen(str1); i++)
    {
        str2[i] = *(ptr + strlen(str1) - 1 -i);
    }
    
    str2[strlen(str1)] = '\0';

    printf("The reversed string: %s", str2);
    return 0;
}