/**
 * main - the main function
 * description: Declares a string and prints the ASCII value of each character.
 * return: 0
*/

#include <stdio.h>

char str[] = "Hello";

int main() {
    for (int i = 0; str[i] != '\0'; i++) {
	printf("Character: %c, ASCII: %d\n", str[i], str[i]);
    }
    return 0;
}

