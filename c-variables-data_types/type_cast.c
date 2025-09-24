/**
 * main - the main function
 * description: Demonstrates type casting by dividing two integers and printing the result as an integer and as a float.
 * return: 0
*/

#include <stdio.h>

int a = 5;
int b = 2;

int main() {
    printf("Integer division: %d\n", a / b);
    printf("Float division: %.2f\n", (float)a / b);
    return 0;
}
