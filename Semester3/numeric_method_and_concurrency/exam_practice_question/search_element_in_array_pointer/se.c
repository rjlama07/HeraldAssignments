#include <stdio.h>

void main()
{
    int n;
    printf("Enter element you want to search");
    scanf("%d", &n);
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    int a = 0;
    for (int i = 0; i < 5; i++)
    {
        if (*ptr == n)
        {
            a = 1;
            break;
        }
        ptr++;
    }
    if (a == 0)
    {
        printf("Element not found");
    }
    else
    {
        printf("Element found");
    }
}