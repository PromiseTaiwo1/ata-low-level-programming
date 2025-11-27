#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(void)
{
    char num_str[50];
    int converted;
		
    // ----- STRING TO INTEGER CONVERSION -----
    printf("Enter a number as a string (e.g., \"456\"): ");
    fgets(num_str, sizeof(num_str), stdin);
		    
    // Remove newline if it exists
    num_str[strcspn(num_str, "\n")] = '\0';
		    
    converted = atoi(num_str);
		    
    printf("String \"%s\" converted to integer: %d\n\n", num_str, converted);
		    
    // ----- RANDOM NUMBER GENERATION -----
    printf("Generating 3 random numbers:\n");
		    
    srand(time(NULL));  // Seed the random generator
		    
    printf("Random number 1: %d\n", rand());
    printf("Random number 2: %d\n", rand());
    printf("Random number 3: %d\n", rand());
		    
return 0;
}
