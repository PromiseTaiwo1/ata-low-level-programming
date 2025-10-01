/**
 * main - converts Celsius to Fahrenheit
 * Description: Program asks for Celsius temperature, converts it to Fahrenheit, and prints result.
 * Return: 0
*/

#include <stdio.h>

int main(void)
{
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);

    return 0;
}
