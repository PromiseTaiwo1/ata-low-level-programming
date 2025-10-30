#include <stdio.h>


int _pow_recursion(int x, int y)
{
    if (y < 0)
        return -1; // invalid case: negative exponents not supported
				       
    if (y == 0)
	return 1;  // base case: any number to the power of 0 is 1
				       
    // recursive step: x^y = x * x^(y-1)
    return x * _pow_recursion(x, y - 1);
}
				       
int main(void)
{
    int x, y, result;
				       
    printf("Enter first integer: ");
    scanf("%d", &x);
				       
    printf("Enter second integer: ");
    scanf("%d", &y);
				       
    result = _pow_recursion(x, y);
				       
    if (result == -1)
        printf("%d raised to the power of %d is: -1 (Error)\n", x, y);
    else
	printf("%d raised to the power of %d is: %d\n", x, y, result);
				       
    return 0;
}
