/**
 * main - the main function
 * description: Declares a char variable, prints its ASCII value and the next character.
 * return: 0
*/

#include <stdio.h>

char c = 'A';

int main() {
    printf("Character: %c\n", c);
    printf("ASCII value: %d\n", c);
    printf("Next character: %c\n", c + 1);
    return 0;
}

