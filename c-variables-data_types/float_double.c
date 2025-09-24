/**
 * main - the main function
 * description: Prints the values of a float with 2 decimal places and a double with 6 decimal places using %f and %lf.
 * return: 0
*/

#include <stdio.h>

float myFloat = 3.14f;
double myDouble = 3.141593;

int main() {
    printf("Float value: %.2f\n", myFloat);   // 2 decimal places
    printf("Double value: %.6lf\n", myDouble); // 6 decimal places
    return 0;
}
