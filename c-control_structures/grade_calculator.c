#include <stdio.h>

int main(void)
{
    int score;

    printf("Enter your score (0-100): ");
    scanf("%d", &score);

    if (score < 0 || score > 100)
    {
	printf("Invalid score! Please enter a value between 0 and 100.\n");
    }
    else if (score >= 95 && score <= 100)
    {
	printf("Your grade is A\n");
    }
    else if (score >= 85 && score <= 94)
    {
	printf("Your grade is B\n");
    }
    else if (score >= 61 && score <= 84)
    {
	printf("Your grade is C\n");
    }
    else if (score >= 46 && score <= 60)
    {
	printf("Your grade is D\n");
    }
    else // 0–45
    {
	printf("Your grade is F\n");
    }
						 
    return 0;
}
