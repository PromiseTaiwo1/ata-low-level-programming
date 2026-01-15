#include <stdio.h>

int main(void)
{
    int x = 50;
    int *ptr = &x;

    printf("Original value of x: %d\n", x);
    printf("Value accessed via pointer: %d\n", *ptr);

    return 0;
}
