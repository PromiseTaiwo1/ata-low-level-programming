/**
 * main - prints the ASCII value of a character
 * Description: Reads a single character from the user and prints its ASCII value.
 * Return: 0
*/

#include <stdio.h>

int main(void)
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("The ASCII value of '%c' is %d\n", ch, ch);

    return 0;
}
