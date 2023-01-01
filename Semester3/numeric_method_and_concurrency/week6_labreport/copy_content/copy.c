#include <stdio.h>
void main()
{
    FILE *new;
    FILE *emp;
    char c;
    emp = fopen("old.txt", "r");
    new = fopen("event.txt", "w");
    if (emp == NULL && new == NULL)
    {

        printf("\nUnable to open file.\n");
        printf("Please check if file exists and you have read/write privilege.\n");
    }

    while (!feof(emp))
    {
        c = getc(emp);
        fputc(c, new);
    }
    printf("\nFiles copied successfully.\n");
    fclose(new);
    fclose(emp);
}
