#include <stdio.h>

int fibonacci(int n)
{
    if (n < 0)
    {
	printf("Error: Fibonacci is not defined for negative numbers.\n");
	return -1; // invalid input
    }
							  
    // Base cases
    if (n == 0)
	return 0;
    if (n == 1)
	return 1;
							   
    // Recursive case: F(n) = F(n-1) + F(n-2)
    return fibonacci(n - 1) + fibonacci(n - 2);
}
							   
int main(void)
{
    int num, result;
							   
    printf("Enter an integer: ");
    scanf("%d", &num);
							   
    result = fibonacci(num);
							   
    if (result != -1)
	printf("Fibonacci(%d) is: %d\n", num, result);
							   
    return 0;
}							   
