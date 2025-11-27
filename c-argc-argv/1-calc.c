#include <stdio.h>
#include <stdlib.h>

/**
 * main - simple command-line calculator (add/sub)
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
    int num1, num2, result;
    char op;

    if (argc != 4)
    {
	printf("Usage: ./calc <number1> <operator> <number2>\n");
	return 1;
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);
    op = argv[2][0];

    if (op == '+')
	result = num1 + num2;
    else if (op == '-')
	result = num1 - num2;
    else
    {
	printf("Error: Invalid operator. Use '+' or '-'.\n");
	return 1;
    }

    printf("Result: %d\n", result);
    return 0;
}
