#include <stdio.h>

/* Function that increments the value pointed to by num_ptr */
void increment(int *num_ptr)
{
    (*num_ptr)++;
}

int main(void)
{
    int value = 5;

    printf("Value before function call: %d\n", value);

    increment(&value);  // Pass address of value
					
    printf("Value after function call: %d\n", value);
					
    return 0;
}
