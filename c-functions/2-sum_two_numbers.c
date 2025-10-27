#include <stdio.h>

/* Function prototype */
void print_sum(int a, int b);

/* Function definition */
void print_sum(int a, int b)
{
    int sum = a + b;
    printf("Sum: %d\n", sum);
}

/* Main function */
int main(void)
{
    int num1, num2;

    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    print_sum(num1, num2);

    return 0;
}
