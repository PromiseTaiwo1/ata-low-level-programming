#include <stdio.h>

int main(void)
{
    char c;

    for (c = 'a'; c <= 'z'; c++)
    {
	putchar(c);   // print each character
    }
							  
    putchar('\n');    // print newline at the end
						
    return 0;
}
