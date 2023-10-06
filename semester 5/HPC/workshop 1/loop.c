#include <stdio.h>

int main()
{
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("%d", i);
    }
    printf("\n");
    while ((i < 10))
    {
        printf("%d", i);
        i++;
    }
    do
    {
        printf("%d", i);
        i++;

    } while (i < 15);

    if (i > 13)

    {
        printf("\n");
        printf("custard");
    }
    else
    {
        printf("\n");
        printf("gravy");
    }

    return 0;
}
