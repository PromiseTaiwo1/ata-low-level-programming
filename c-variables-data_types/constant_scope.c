/**
 * main - the main function
 * description: Demonstrates that a const variable inside main() cannot be modified
 * return: 0
*/

#include <stdio.h>

int main(void)
{
    const int num = 10;   // const = keyword, num = identifier, 10 = literal
    printf("Initial value: %d\n", num);
				  
    // Uncomment the next line to see the compiler error
     num = 20;  // ❌ error: assignment of read-only variable ‘num’
				  
    return 0;
}
				  
