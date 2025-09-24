/**
 * main - the main function
 * description: Declares student information (name, age, GPA, grade), prints it in a formatted table,and also prints GPA as an integer in another table using type conversion.
 * return: 0
*/

#include <stdio.h>

char name[] = "John";
int age = 20;
float gpa = 3.75f;
char grade = 'A';

int main() {
	    // First table with GPA as float
	    printf("Name\tAge\tGPA\tGrade\n");
	    printf("%s\t%d\t%.2f\t%c\n", name, age, gpa, grade);
	    
	    printf("\n"); // Blank line between tables
	    
	    // Second table with GPA as int
	    printf("Name\tAge\tGPA\tGrade\n");
	    printf("%s\t%d\t%d\t%c\n", name, age, (int)gpa, grade);
	    
return 0;
}
