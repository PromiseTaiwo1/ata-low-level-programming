#include <stdio.h>

/**
 * factorial - calculates the factorial of a non-negative integer using recursion
 * @n: the number to calculate factorial of
 *
 * Return: the factorial of n
 */
long long factorial(int n)
{
    if (n < 0)
    {
	printf("Error: Factorial is not defined for negative numbers.\n");
	return -1;  // Return -1 to indicate invalid input
    }
							    
    // Base case: factorial of 0 or 1 is 1
    if (n == 0 || n == 1)
	return 1;
							    
    // Recursive case: n! = n * (n-1)!
    return n * factorial(n - 1);
}
							    
int main(void)
{
    int num;
    long long result;
							    
    printf("Enter an integer: ");
    scanf("%d", &num);
							    
    result = factorial(num);
							    
    if (result != -1)
	printf("The factorial of %d is: %lld\n", num, result);
							    
    return 0;
}
