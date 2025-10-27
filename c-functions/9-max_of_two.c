#include <stdio.h>

/* Function prototype */
int find_max(int a, int b);

/* Function definition */
int find_max(int a, int b)
{
    if (a > b)
	return a;
    else
	return b;
}

/* Main function */
int main(void)
{
    int num1, num2, max;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    max = find_max(num1, num2);

    printf("Maximum number is: %d\n", max);

    return 0;
}
