#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[50];
    char s2[50];

    char c1[50];
    char c2[50];

    // ----- CONCATENATION -----
    printf("Enter first string for concatenation: ");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0';
			    
    printf("Enter second string for concatenation: ");
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = '\0';
			    
    strcat(s1, s2);
			    
    printf("Concatenated string: %s\n\n", s1);
			    
    // ----- COMPARISON -----
    printf("Enter first string for comparison: ");
    fgets(c1, sizeof(c1), stdin);
    c1[strcspn(c1, "\n")] = '\0';
			    
    printf("Enter second string for comparison: ");
    fgets(c2, sizeof(c2), stdin);
    c2[strcspn(c2, "\n")] = '\0';
			    
    int result = strcmp(c1, c2);
			    
    if (result == 0)
        printf("\"%s\" and \"%s\" are equal.\n", c1, c2);
    else
	printf("\"%s\" and \"%s\" are not equal.\n", c1, c2);
			    
    return 0;
}
