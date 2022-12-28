#include <stdio.h>

void main()
{
    printf("haha");
    FILE *file;
    char line[200];
    while (!feof(file))
    {
        fgets(line, 200, file);
        puts(line);
    }
    fclose(file);
}