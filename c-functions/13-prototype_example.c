#include <stdio.h>

/* Function Prototype */
void greet_user(char *name);

int main(void)
{
    char name[100];

    printf("Enter your name: ");
    scanf("%99s", name); /* safer input, avoids overflow */

    greet_user(name);

    return 0;
}

/* Function Definition */
void greet_user(char *name)
{
    printf("Hello, %s! Welcome to the program.\n", name);
}
