#include <stdio.h>
#include <time.h>
int main() {
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    printf("The year is %d\n", tm.tm_year + 1900);
    return 0;
}
