#include <stdio.h>

/* Function Prototype */
long long calculate_factorial(int n);

/* Function Definition */
long long calculate_factorial(int n)
{
    long long result = 1;
    int i;

    for (i = 1; i <= n; i++)
    {
	result *= i;
    }

    return result;
}

/* Main Function */
int main(void)
{
    int n;
    long long factorial;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0)
    {
	printf("Factorial is not defined for negative numbers.\n");
	return 1; 
    }

    factorial = calculate_factorial(n);

    printf("Factorial of %d is: %lld\n", n, factorial);

    return 0;
}
