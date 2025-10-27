#include <stdio.h>

/* Function prototype */
int get_fixed_number(void);

/* Function definition */
int get_fixed_number(void)
{
    return 100;
}

/* Main function */
int main(void)
{
    int number;

    number = get_fixed_number();

    printf("Fixed number is: %d\n", number);

    return 0;
}
