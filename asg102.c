//WRITE A C PROGRAM TO COUNT NUMBER OF CHARACTERS, WORDS AND LINES IN A TEXT FILE.

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    file = fopen("asg102.txt", "r");
    if (file == NULL) {
        printf("Could not open file.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        characters++;

        if (ch == '\n') {
            lines++;
        }

        if (isspace(ch)) {
            if (inWord) {
                words++;
                inWord = 0;
            }
        } else {
            inWord = 1;
        }
    }

    if (inWord) {
        words++;
    }

    if (characters > 0 && ch != '\n') {
        lines++;
    }

    fclose(file);

    printf("Number of characters: %d\n", characters);
    printf("Number of words: %d\n", words);
    printf("Number of lines: %d\n", lines);

    return 0;
}