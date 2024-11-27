/*WRITE A PROGRAM IN C TO PRINT ALL PERMUTATIONS OF A GIVEN STRING USING POINTERS.
THE PERMUTATIONS
OF THE STRING ARE: ABCD ABDC ACBD ACDB ADCB ADBC BACD BADC BCAD BCDA BDCA BDAC CBAD
CBDA
CABD CADB CDAB CDBA DBCA DBAC DCBA DCAB DACB DABC*/

#include <stdio.h>
#include <string.h>

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void permute(char *str, int start, int end) {
    if (start == end) {
        printf("%s\n", str);
    } else {
        for (int i = start; i <= end; i++) {
            swap((str + start), (str + i));
            permute(str, start + 1, end);
            swap((str + start), (str + i));
        }
    }
}

int main() {
    char str[] = "ABCD";
    int length = strlen(str);
    printf("Permutations of the string '%s':\n", str);
    permute(str, 0, length - 1);
    return 0;
}