/**
 * main - performs arithmetic operations on two integers
 * Description: Accepts two integers from the user and displays
 * their sum, difference, product, quotient, and remainder.
 * Return: 0
*/

#include <stdio.h>

int main(void)
{
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Sum = %d\n", a + b);
    printf("Difference = %d\n", a - b);
    printf("Product = %d\n", a * b);
    printf("Quotient = %d\n", a / b);
    printf("Remainder = %d\n", a % b);

    return 0;
}
