#include <stdio.h>

int main(void)
{
    int number;

    // Prompt user for input
    printf("Enter an integer: ");
    scanf("%d", &number);
		
    // Check if positive, negative, or zero
    if (number > 0)
    {
	printf("%d is a positive number.\n", number);
    }
    else if (number < 0)
    {
	printf("%d is a negative number.\n", number);
    }
    else
    {
        printf("%d is zero.\n", number);
    }
    return 0;                                                                      }
