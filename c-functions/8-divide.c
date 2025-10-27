#include <stdio.h>

/* Function prototype */
int divide(int a, int b);

/* Function definition */
int divide(int a, int b)
{
    if (b == 0)
    {
	return 0;  /* Handle division by zero safely */
    }
    return a / b;
}

/* Main function */
int main(void)
{
    int num1, num2, result;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    result = divide(num1, num2);

    printf("Result of division: %d\n", result);

    return 0;
}
