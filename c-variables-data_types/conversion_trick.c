/**
 * main - the main function
 * description: Declares a double variable, converts it to int, and prints both values.
 * return: 0
*/

#include <stdio.h>

double d = 9.99;

int main() {
    int i = (int)d;
    printf("Double value: %.2f\n", d);
    printf("Integer value: %d\n", i);
    return 0;
}

