#include <stdio.h>

/**
 * number - global variable
 * description: This variable has external linkage because it is declared outside any function without 'static'.
*/
int number = 42;

/**
 * main - the main function
 * description: Prints the value of the global variable 'number'.
 * return: 0
*/
int main() {
    printf("The number is: %d\n", number);
    return 0;
}

