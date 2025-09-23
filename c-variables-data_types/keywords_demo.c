/**
 * main - demonstrates the use of several C keywords
 * description: A tiny program using int, const, if, for, and return
 * return: 0
 */

// This program prints: Keywords are powerful

#include <stdio.h>

int main(void)
{
    const int times = 1;        // const = keyword, int = keyword
    for (int i = 0; i < times; i++)  // for = keyword, int = keyword
    {
        if (i == 0)              // if = keyword
        {
           printf("Keywords are powerful\n");
        }
    }
    return 0;                    // return = keyword
}                                                         
