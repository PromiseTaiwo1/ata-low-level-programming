#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *file;
    char firstWord[50];
    int ch;

    /* --- Step 1: Open file in write mode --- */
    file = fopen("data.txt", "w");
    if (file == NULL)
    {
	fputs("Error opening file for writing\n", stderr);
	return 1;
    }

    /* --- Step 2: Write text using fprintf --- */
    fprintf(file, "C programming is fun");

    /* --- Step 3: Add '!' using fputc --- */
    fputc('!', file);

    /* --- Step 4: Close file --- */
    fclose(file);

    /* --- Step 5: Reopen file in read mode --- */
    file = fopen("data.txt", "r");
    if (file == NULL)
    {
	fputs("Error opening file for reading\n", stderr);
	return 1;
    }

    /* --- Step 6: Read first word using fscanf --- */
    if (fscanf(file, "%49s", firstWord) == 1)
    {
	fputs("First word: ", stdout);
	fputs(firstWord, stdout);
	putchar('\n');
    }

    /* --- Step 7: Read the rest using fgetc --- */
    fputs("Rest of file: ", stdout);
    while ((ch = fgetc(file)) != EOF)
    {
	putchar(ch);
    }

    /* --- Step 8: Close file --- */
    fclose(file);

    return 0;
}
