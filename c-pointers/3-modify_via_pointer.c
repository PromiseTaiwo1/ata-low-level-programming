#include <stdio.h>

int main(void)
{
    int score = 75;
    int *ptr_score = &score;

    printf("Initial score: %d\n", score);
    printf("Initial score via pointer: %d\n", *ptr_score);

    /* Modify score via pointer */
    *ptr_score = 90;

    printf("Score after modification: %d\n", score);
    printf("Score after modification via pointer: %d\n", *ptr_score);

    return 0;
}
