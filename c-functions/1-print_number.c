#include <stdio.h>

/* Function prototype */
void print_number(int num);

/* Function definition */
void print_number(int num)
{
    printf("The number is: %d\n", num);
}

/* Main function */
int main(void)
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    print_number(number);

    return 0;
}
