#include <stdio.h>

int main(void)
{
    int ch;

    // Prompt
    putchar('E'); putchar('n'); putchar('t'); putchar('e'); putchar('r');
    putchar(' '); putchar('t'); putchar('e'); putchar('x'); putchar('t');
    putchar(' '); putchar('('); putchar('p'); putchar('r'); putchar('e');
    putchar('s'); putchar('s'); putchar(' '); putchar('E'); putchar('n');
    putchar('t'); putchar('e'); putchar('r'); putchar(' '); putchar('t');
    putchar('o'); putchar(' '); putchar('s'); putchar('t'); putchar('o');
    putchar('p'); putchar(')'); putchar(':'); putchar(' ');
		
    // Read characters until newline
    while ((ch = getchar()) != '\n' && ch != EOF)
    {
        putchar(ch);
    }
    
    // Add a newline at the end
    putchar('\n');

    return 0;
}
