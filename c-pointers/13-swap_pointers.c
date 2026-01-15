#include <stdio.h>

/* Function to swap values using pointers */
void swap_integers(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int num1 = 10;
    int num2 = 20;

    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);

    swap_integers(&num1, &num2);  // Pass addresses
						      
    printf("After swap: num1 = %d, num2 = %d\n", num1, num2);
						      
    return 0;
}
