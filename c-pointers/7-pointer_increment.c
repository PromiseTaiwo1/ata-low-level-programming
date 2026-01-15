#include <stdio.h>

int main(void)
{
    int num = 10;
    int *ptr = &num;

    printf("Initial address: %p\n", (void *)ptr);

    ptr++;  // Increment pointer
				
    printf("Address after increment: %p\n", (void *)ptr);
				
    /* 
    Explanation:
    When you increment an int pointer, the pointer does not increase by 1 byte.
    It increases by sizeof(int) bytes because it points to an int. 
    On most systems, sizeof(int) is 4 bytes. 
    Pointer arithmetic in C automatically scales by the size of the data type.
    */
				
    return 0;
}
