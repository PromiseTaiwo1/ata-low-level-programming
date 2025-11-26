#include <stdio.h>

int main(void)
{
    char name[100];
    int age;
    float height;

    printf("Enter your name: ");
    scanf("%99s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height (in meters): ");
    scanf("%f", &height);

    printf("Hello, %s! You are %d years old and %.2f meters tall.\n",
	    name, age, height);

    return 0;
}
