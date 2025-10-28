#include <stdio.h>

/* Function Prototype */
int is_prime(int num);

/* Function Definition */
int is_prime(int num)
{
    int i;

    if (num <= 1)
	return 0;

    for (i = 2; i * i <= num; i++)
    {
	if (num % i == 0)
	    return 0;
    }

    return 1;
}

/* Main Function */
int main(void)
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (is_prime(num))
	printf("%d is a prime number.\n", num);
    else
	printf("%d is not a prime number.\n", num);

    return 0;
}
