/**
 * main - the main function
 * description: Demonstrates C tokens by declaring variables and printing them
 * return: 0
 */

#include <stdio.h>

int main(void)
{
    int number = 25;      // int = keyword, number = identifier, = = assignment operator, 25 = integer literal, ; = punctuation
    float price = 15.7;   // float = keyword, price = identifier, = = assignment operator, 15.7 = floating-point literal, ; = punctuation
    char grade = 'A';     // char = keyword, grade = identifier, = = assignment operator, 'A' = character literal, ; = punctuation
				 
    printf("Integer: %d\n", number);
    printf("Float: %.1f\n", price);
    printf("Char: %c\n", grade);
				  
    return 0;
}
                      
