#include <stdio.h>

int main(void)
{
    FILE *file;

    // Open file in write mode
    file = fopen("quote.txt", "w");
    if (file == NULL)
    {
	perror("Error opening file");
	return 1;
    }
		
    // Write text into the file
    fputs("The journey of a thousand miles begins with a single step.\n", file);

    // Close the file
    fclose(file);
		
    return 0;
}
