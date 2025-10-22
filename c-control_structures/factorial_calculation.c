#include <stdio.h>

int main(void)
{
    int n;
    unsigned long long factorial = 1;  // Use unsigned long long to handle large results
    int i = 1;
						   
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);
				
    if (n < 0)
    {
	printf("Error! Factorial of a negative number doesn't exist.\n");
	return 1;
    }
						   
    while (i <= n)
    {
	factorial *= i;
	i++;
    }
						   
    printf("Factorial of %d is: %llu\n", n, factorial);
						   
    return 0;
}
