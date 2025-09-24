/**
 * main - the main function
 * description: Demonstrates declaring and printing variables of different types
 * return: 0
*/

#include <stdio.h>

int main(void)
{
    int age = 20;        // int = keyword, age = identifier, 20 = literal
    float height = 5.9;  // float = keyword, height = identifier, 5.9 = literal
    char grade = 'A';    // char = keyword, grade = identifier, 'A' = character literal
				 
    printf("Age: %d, Height: %.1f, Grade: %c\n", age, height, grade);
    return 0;
}         
