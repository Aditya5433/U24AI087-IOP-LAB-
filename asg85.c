//WRITE A FUNCTION TO READ CHARACTER AND CHECK WHETHER IT IS VOWEL OR NOT.

#include <stdio.h>

void vowelORnot(char ch)
{
    char vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    int isVowel = 0;

    for (int i = 0; i < 10; i++)
    {
        if (ch == vowels[i])
        {
            isVowel = 1;
            break;
        }  
    }
    
    if (isVowel)
    {
        printf("%c is a vowel\n", ch);
    }else
    {
        printf("%c is not a vowel\n", ch);
    }
}
int main()
{
    char c;
    printf("Enter any character\n");
    scanf("%c", &c);

    vowelORnot(c);
    return 0;
}