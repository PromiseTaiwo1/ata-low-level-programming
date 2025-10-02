#include <stdio.h>

int main(void)
{
    char text[100];  // Declare character array of size 100
			     
    printf("Enter a line of text: ");
			     
    // Read input from stdin
    if (fgets(text, sizeof(text), stdin) != NULL)
    {
        // Print input back to screen using fputs
	fputs(text, stdout);
    }
    else
    {
	printf("Error reading input.\n");
    }
	return 0;
}	
