#include <stdio.h>
#include <string.h>

int main(void)
{
    char input_string[100];
    char dest_string[100];

    printf("Enter a string: ");
    fgets(input_string, sizeof(input_string), stdin);

    // Remove trailing newline if present
    input_string[strcspn(input_string, "\n")] = '\0';
			   
    size_t length = strlen(input_string);
			    
    strcpy(dest_string, input_string);
			    
    printf("Original string: \"%s\"\n", input_string);
    printf("Length of the string: %zu\n", length);
    printf("Copied string: \"%s\"\n", dest_string);
			    
    return 0;
}
