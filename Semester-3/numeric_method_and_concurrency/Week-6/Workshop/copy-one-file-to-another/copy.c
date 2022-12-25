#include <stdio.h>
void main()
{
    FILE *new;
    FILE *emp;
    char c;
    emp = fopen("employee.txt", "r");
    new = fopen("newemployee.txt", "w");
    if (emp == NULL && new == NULL)
    {

        printf("\nUnable to open file.\n");
        printf("Please check if file exists and you have read/write privilege.\n");
    }
    c = fgetc(emp);
    while (c != EOF)
    {
        fputc(c, new);
        c = getc(emp);
    }
    printf("\nFiles copied successfully.\n");
    fclose(new);
    fclose(emp);
}
