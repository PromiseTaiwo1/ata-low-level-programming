#include <stdio.h>

/* Function prototype */
int subtract(int a, int b);

/* Function definition */
int subtract(int a, int b)
{
    return a - b;
}

/* Main function */
int main(void)
{
    int num1, num2, result;

    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    result = subtract(num1, num2);

    printf("Result of subtraction: %d\n", result);

    return 0;
}
