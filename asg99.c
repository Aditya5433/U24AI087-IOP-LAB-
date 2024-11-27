/*WRITE A C PROGRAM TO READ THE TEXT FILE AND ALSO COUNT THE NUMBER OF VOWELS
PRESENT IN THE FILE.*/

#include <stdio.h>

int main()
{
    FILE *f_ptr = fopen("asg99.txt", "r");
    int count = 0;
    char ch = fgetc(f_ptr);
    
    if (! f_ptr)
    {
        printf("Unsuccesful file opening\n");
    }
    
    while (ch != EOF)
    {
        if ((ch == 'a')||(ch == 'e')||(ch == 'i')||(ch == 'o')||(ch == 'u')||
            (ch == 'A')||(ch == 'E')||(ch == 'I')||(ch == 'O')||(ch == 'U'))
        {
            count++;
        }

        ch = fgetc(f_ptr);
    }
    
    fclose(f_ptr);

    printf("The number of vowels in file is %d", count);

    return 0;
}