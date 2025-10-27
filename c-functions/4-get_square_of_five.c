#include <stdio.h>
#include <math.h>

/* Function prototype */
int get_square_of_five(void);

/* Function definition */
int get_square_of_five(void)
{
    double result = pow(5, 2);
    return (int)result;  /* Type cast double to int */
}

/* Main function */
int main(void)
{
    int square;

    square = get_square_of_five();

    printf("Square of 5 is: %d\n", square);

    return 0;
}
