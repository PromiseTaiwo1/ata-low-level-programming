#include <stdio.h>
#include <math.h>

int main(void)
{
    double number;
    double base, exponent;

    // ----- SQUARE ROOT -----
    printf("Enter a positive number to find its square root: ");
    scanf("%lf", &number);
		    
    if (number < 0)
    {
	printf("Error: Cannot compute square root of a negative number.\n");
    }
    else
    {
        double result = sqrt(number);
        printf("Square root of %.2f is %.2f\n\n", number, result);
    }
		    
    // ----- POWER OPERATION -----
    printf("Enter a base number: ");
    scanf("%lf", &base);
		    
    printf("Enter an exponent: ");
    scanf("%lf", &exponent);
		    
    double power_result = pow(base, exponent);
    printf("%.2f raised to the power of %.2f is %.2f\n", base, exponent, power_result);
		    
    return 0;
}
