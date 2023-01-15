#include <stdio.h>

void main()
{

    FILE *file;
    file = fopen("employee.txt", "r");
    char line[200];
    if (file == NULL)
    {
        perror("Error opening file");
    }

    while (!feof(file))
    {
        fgets(line, 200, file);
        printf("%s", line);
    }
    fclose(file);
}