#include <stdio.h>

int main(void)
{
    int array[3] = {1, 2, 3};
    int *ptr = array;  // array name decays to &array[0]
				   
    printf("Address of array[0]: %p\n", (void *)&array[0]);
    printf("Address of array (array name): %p\n", (void *)array);
    printf("Value of ptr (address of array[0]): %p\n", (void *)ptr);
				   
    return 0;
}            
