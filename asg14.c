/*PROGRAM TO CHECK WHETHER A GIVEN CHARACTER IS CAPITAL CASE LETTER, SMALL 
CASE LETTER, A DIGIT OR A SPECIAL SYMBOL*/  
#include<stdio.h>
int main()
{
    char Ch ;
    printf("Enter a character ");
    scanf("%c" ,&Ch);

    if((Ch>='A')&&(Ch<='Z')) {
        printf("%c is a capital case letter",Ch);
    }else if((Ch>='a')&&(Ch<='z')){
        printf("%c is a small case letter",Ch);
    }else if((Ch>='0')&&(Ch<='9')){
        printf("%c is digit",Ch);
    }else{
        printf("%c is special symbol");
    }

    return 0 ;
}       