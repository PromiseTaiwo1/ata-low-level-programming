#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[50];  // character array of size 50
			    
    printf("Enter your name: ");
			   
    // Read input
    if (fgets(name, sizeof(name), stdin) != NULL)
    {
	// Remove trailing newline if it exists
	size_t len = strlen(name);
	if (len > 0 && name[len - 1] == '\n')
        {
	    name[len - 1] = '\0';
	}
			    
	// Print greeting
        printf("Hello, %s\n", name);
    }
    else
    {
	printf("Error reading input.\n");
    }
			    
    return 0;
}
