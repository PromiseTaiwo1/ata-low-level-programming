#include <stdio.h>

int main(void)
{
    int n;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    // Handle negative numbers
    if (n < 0)
	n = -n;
			    
    do
    {
	n /= 10;
	count++;
    } while (n != 0);
			    
    printf("Number of digits: %d\n", count);
			    
    return 0;
}
