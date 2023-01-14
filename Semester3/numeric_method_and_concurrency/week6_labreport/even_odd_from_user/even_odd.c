#include <stdio.h>
void main()
{
    int c = 1;
    int number;
    FILE *even, *odd;
    even = fopen("even.txt", "w");
    odd = fopen("odd.txt", "w");

    while (c != 0)
    {
        printf("Enter a number or 0 to end");
        scanf("%d", &c);
        if (c == 0)
        {
            break;
        }
        if (c % 2 == 0)
        {
            fprintf(even, "%d\n", c);
        }
        else
        {
            fprintf(odd, "%d\n", c);
        }
    }
}