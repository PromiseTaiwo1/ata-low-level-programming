#include <stdio.h>

/* Function Prototype */
void print_message_n_times(int n);

/* Function Definition */
void print_message_n_times(int n)
{
    for (int i = 0; i < n; i++)
    {
	printf("Hello from function!\n");
    }
}

/* Main Function */
int main(void)
{
    int n;

    printf("Enter a number of times: ");
    scanf("%d", &n);

    print_message_n_times(n);

    return 0;
}
