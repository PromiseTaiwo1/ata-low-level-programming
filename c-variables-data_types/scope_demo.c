/**
 * main - the main function
 * description: Demonstrates the difference between a global and a local variable
 * return: 0
*/

#include <stdio.h>

int counter = 5;  // Global variable
		  
void printGlobal(void)
{
    // Accesses the global variable directly
    printf("Global counter: %d\n", counter);
}
		  
int main(void)
{
    int counter = 10;  // Local variable (shadows the global one)
		  
    printGlobal();     // Prints the global variable
    printf("Local counter: %d\n", counter);
		  
    return 0;
}
