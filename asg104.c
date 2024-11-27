/*AN ENUMERATION WITH COLOR NAMES CAN BE USED IN A SWITCH STATEMENT TO DISPLAY
THE HEXADECIMAL COLOR CODE.*/

#include <stdio.h>

typedef enum {
    RED,
    GREEN,
    BLUE
} Color;

int main() {
    Color color;
    printf("Enter a color number (1-3):\n");
    printf("1. Red\n");
    printf("2. Green\n");
    printf("3. Blue\n");
    scanf("%d", &color);

    switch (color -1) {
        case RED:
            printf("The hexadecimal color code for Red is #FF0000\n");
            break;
        case GREEN:
            printf("The hexadecimal color code for Green is #00FF00\n");
            break;
        case BLUE:
            printf("The hexadecimal color code for Blue is #0000FF\n");
            break;
        default:
            printf("Invalid color number\n");
            break;
    }

    return 0;
}
