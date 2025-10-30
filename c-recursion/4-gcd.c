#include <stdio.h>

/**
 * gcd - calculates the Greatest Common Divisor (GCD) of two non-negative integers
 * using the Euclidean algorithm (tail-recursive version)
 * @a: first integer
 * @b: second integer
 *
 * Return: the GCD of a and b
 *
 * ----------------------------------------------------------------------------
 * Explanation (Tail Recursion and Compiler Optimization):
 *
 * A function is said to be *tail-recursive* if the recursive call is the very
 * last operation executed by the function — meaning, there’s nothing left to do
 * after the recursive call returns.
 *
 * In this `gcd` function, the recursive call:
 *     return gcd(b, a % b);
 * is the final action in the function.
 *
 * This property allows compilers to perform *Tail Call Optimization (TCO)*,
 * where instead of creating a new stack frame for each recursive call,
 * the compiler reuses the current function’s stack frame.
 *
 * ✅ Benefit: TCO drastically reduces stack usage and prevents stack overflow,
 * especially for deep recursion — making it as efficient as a loop.
 * ----------------------------------------------------------------------------
 */
int gcd(int a, int b)
{
    // Base case: if b is 0, GCD is a
    if (b == 0)
	return a;
	    
    // Tail-recursive step: call gcd with (b, remainder)
    return gcd(b, a % b);
}
	    
int main(void)
{
    int a, b, result;
	    
    printf("Enter first integer: ");
    scanf("%d", &a);
	    
    printf("Enter second integer: ");
    scanf("%d", &b);
	    
    result = gcd(a, b);
	   
    printf("The GCD of %d and %d is: %d\n", a, b, result);
	    
    return 0;
}
