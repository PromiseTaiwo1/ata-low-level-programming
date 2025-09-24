/**
 * main - the main function
 * description: Demonstrates a static variable that keeps its value between calls
 * return: 0
*/

#include <stdio.h>

void increment(void)
{
    static int counter = 0;   // static variable retains its value between calls
    counter++;
    printf("Counter value: %d\n", counter);
}
				     
int main(void)
{
    increment();  // 1st call → prints 1
    increment();  // 2nd call → prints 2
    increment();  // 3rd call → prints 3
    return 0;
}
