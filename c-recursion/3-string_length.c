#include <stdio.h>

/**
 * _strlen_recursion - returns the length of a string using recursion
 * @s: the string to measure
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
    if (*s == '\0')  // base case: when we hit the null terminator
	return 0;
			     
    // recursive step: count this character + recurse on the next
    return 1 + _strlen_recursion(s + 1);
}
			     
int main(void)
{
    char str[100];
    int length;
			     
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
			     
    // remove newline from fgets if present
    for (int i = 0; str[i]; i++)
    {
	if (str[i] == '\n')
	{
	    str[i] = '\0';
	    break;
	}
    }
			     
    length = _strlen_recursion(str);
			     
    printf("The length of \"%s\" is: %d\n", str, length);
			     
    return 0;
}
