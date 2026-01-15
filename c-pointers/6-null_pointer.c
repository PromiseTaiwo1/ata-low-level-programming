#include <stdio.h>

int main(void)
{
    int *ptr = NULL;  // Initialize pointer to NULL
			      
    // Check before dereferencing
    if (ptr == NULL)
    {
	printf("ptr is NULL.\n");
    }
			      
    int valid_num = 15;
    ptr = &valid_num;  // Point to a valid integer
			      
    printf("Value for valid_num: %d\n", valid_num);
			      
    if (ptr != NULL)
    {
	printf("ptr is NOT NULL. Value pointed to by ptr: %d\n", *ptr);
    }
			      
    return 0;
}
