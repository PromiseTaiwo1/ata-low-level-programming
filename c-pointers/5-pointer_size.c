#include <stdio.h>

int main(void)
{
    int *int_ptr;
    char *char_ptr;
    float *float_ptr;
    void *void_ptr;

    printf("Size of int*   : %zu bytes\n", sizeof(int_ptr));
    printf("Size of char*  : %zu bytes\n", sizeof(char_ptr));
    printf("Size of float* : %zu bytes\n", sizeof(float_ptr));
    printf("Size of void*  : %zu bytes\n", sizeof(void_ptr));

    return 0;
}
