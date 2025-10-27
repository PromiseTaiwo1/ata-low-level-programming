#include <stdio.h>

/* Function prototype */
int multiply(int a, int b);

/* Function definition */
int multiply(int a, int b)
{
    return a * b;
}

/* Main function */
int main(void)
{
    int num1, num2, product;

    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    product = multiply(num1, num2);

    printf("Result of multiplication: %d\n", product);

    return 0;
}
