/*WITHOUT USING INBUILT STRING FUNCTIONS, PERFORM THE FOLLOWING IN C LANGUAGE:
A. COPY ONE STRING INTO ANOTHER
B. COMPARE TWO STRINGS
C. CONCAT TWO STRINGS
D. REVERSE A GIVEN STRING*/

#include <stdio.h>

void copyString(char str1[], const char str2[]) {
    int i = 0;
    while (str2[i] != '\0') { 
        str1[i] = str2[i];   
        i++;
    }
    str1[i] = '\0'; 
}

int compareStrings(const char str1[], const char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return 0; 
        }
        i++;
    }
    return (str1[i] == str2[i]);
}

void concatenateStrings(char str1[], const char str2[]) {
    int i = 0, j = 0;

    while (str1[i] != '\0') {
        i++;
    }

    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0'; 
}

void reverseString(char str[]) {
    int i = 0, j = 0;
    char temp;

    while (str[j] != '\0') {
        j++;
    }
    
    j--;  
    
    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main() {
    char str1[100], str2[100], str3[100];

    printf("Enter the first string: ");
    scanf("%s", str1);
    
    printf("Enter the second string: ");
    scanf("%s", str2);

    copyString(str3, str1);
    printf("Copied string: %s\n", str3);
 
    if (compareStrings(str1, str2)) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }

    concatenateStrings(str1, str2);
    printf("Concatenated string: %s\n", str1);

    reverseString(str2);
    printf("Reversed second string: %s\n", str2);
    
    return 0;
}