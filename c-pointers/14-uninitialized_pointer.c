#include <stdio.h>

int main(void)
{
    int *uninitialized_ptr;

    /* 
    WARNING ABOUT UNINITIALIZED POINTERS:
    An uninitialized pointer contains a garbage value.
    This value may look like a valid memory address, but it is NOT guaranteed
    to point to memory you own or are allowed to access.
		 
    Dangers include:
    - Pointing to random memory locations
    - Causing undefined behavior
    - Triggering segmentation faults when dereferenced
    - Corrupting data silently (the worst kind of bug)
		 
    Printing the pointer value is usually safe,
    but DEREFERENCING it is extremely dangerous.
    */

    printf("Value of uninitialized_ptr: %p\n", (void *)uninitialized_ptr);

    /* Proper safety practice */
    uninitialized_ptr = NULL;

    if (uninitialized_ptr == NULL)
    {
	printf("After initializing to NULL: uninitialized_ptr is NULL.\n");
    }

    return 0;
}
