/**
 * main - the main function
 * description: Asks the user for their name and prints a greeting
 * return: 0
*/

#include <stdio.h>

int main(void)
{
    char name[50];  // buffer to store the user's name
			    
    printf("Enter your name: ");
    scanf("%49s", name);  // read a string safely, up to 49 characters
			    
    printf("Hello, %s!\n", name);
			    
    return 0;
}                 
