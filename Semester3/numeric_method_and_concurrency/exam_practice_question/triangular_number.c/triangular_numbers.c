#include <stdio.h>

void main()
{
    int j = 0;
    printf("Enter the number");
    int n;
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        int num = i + j;
        printf("%d\n", (i + j));

        j += i;
    }
    printf("\n----------------------------------------------------\n");
}