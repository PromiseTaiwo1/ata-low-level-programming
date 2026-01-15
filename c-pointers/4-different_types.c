#include <stdio.h>

int main(void)
{
    /* Declare variables */
    char ch = 'A';
    float pi = 3.14f;
    double largeNum = 123.456;

    /* Declare pointers */
    char *ptr_ch = &ch;
    float *ptr_pi = &pi;
    double *ptr_largeNum = &largeNum;

    /* Print values and addresses */
    printf("Character: %c, Address: %p, Value via pointer: %c\n", ch, (void *)ptr_ch, *ptr_ch);
    printf("Float: %f, Address: %p, Value via pointer: %f\n", pi, (void *)ptr_pi, *ptr_pi);
    printf("Double: %lf, Address: %p, Value via pointer: %lf\n", largeNum, (void *)ptr_largeNum, *ptr_largeNum);

    return 0;
}
