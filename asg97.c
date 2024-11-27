//WRITE A C PROGRAM TO COUNT THE NUMBER OF VOWELS IN A STRING USING POINTER.

#include <stdio.h>
#include <string.h>

int main()
{
    int count = 0;
    char str[40];
    char *ptr = str;

    printf("Enter a string\n");
    fgets(str, 40, stdin);

    for (int  i = 0; i < strlen(str) - 1; i++)
    {
        if ((ptr[i] == 'a')||(ptr[i] == 'e')||(ptr[i] == 'i')||(ptr[i] == 'o')||(ptr[i] == 'u')||
            (ptr[i] == 'A')||(ptr[i] == 'E')||(ptr[i] == 'I')||(ptr[i] == 'O')||(ptr[i] == 'U'))
        {
            count++;
        }
        
    }
    
    printf("The number of vowels in string are %d", count);
    
    return 0;
}