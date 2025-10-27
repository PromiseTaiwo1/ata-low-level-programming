#include <stdio.h>

/* Function prototype */
int add(int a, int b);

/* Function definition */
int add(int a, int b)
{
    return a + b;
}

/* Main function */
int main(void)
{
    int num1, num2, sum;

    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    sum = add(num1, num2);

    printf("Result of addition: %d\n", sum);

    return 0;
}
