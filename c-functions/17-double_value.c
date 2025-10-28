#include <stdio.h>

/* Function Prototype */
void double_value(int *num);

/* Function Definition */
void double_value(int *num)
{
    *num = *num * 2;
}

/* Main Function */
int main(void)
{
    int value;

    printf("Enter an integer: ");
    scanf("%d", &value);

    printf("Original value: %d\n", value);

    double_value(&value);

    printf("Doubled value: %d\n", value);

    return 0;
}
