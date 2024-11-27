//WRITE A FUNCTION TO READ LINE OF TEXT AND FIND OUT LENGTH OF STRING.

#include <stdio.h>
#include <string.h>

void LengthOFstring()
{
    char line[100];

    printf("Enter a line\n");
    gets(line);
    
    int length = strlen(line);
    printf("Length of string is % d", length);
}

int main()
{
    LengthOFstring();
    
    return 0;
}