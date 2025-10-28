#include <stdio.h>

/* Function Prototype */
void demonstrate_local_scope(void);

/* Function Definition */
void demonstrate_local_scope(void)
{
    int local_var = 50;
    printf("Inside demonstrate_local_scope: local_var = %d\n", local_var);
}

/* Main Function */
int main(void)
{
    int local_var = 10;

    demonstrate_local_scope();

    printf("Inside main: local_var = %d\n", local_var);

    return 0;
}
