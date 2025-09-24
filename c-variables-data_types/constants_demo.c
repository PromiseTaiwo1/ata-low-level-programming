/**
 * main - the main function
 * description: Demonstrates declaring constants using #define and const
 * return: 0
*/

#include <stdio.h>

#define PI_DEFINE 3.14   // Using #define to create a constant
			
int main(void)
{
    const float PI_CONST = 3.14;  // Using const keyword to create a constant
			 
    printf("PI using #define: %.2f\n", PI_DEFINE);
    printf("PI using const: %.2f\n", PI_CONST);
			
    return 0;
}              
