#include <stdio.h>
#include <stdlib.h>

void takeInput(int *p, int n)
{
    for (int i = 0; i < n; i++, p++)
    {
        printf("Enter element %d:", i);
        scanf("%d", p);
    }
}

int sumOfArray(int *ptr, int sum)
{
    int n = 0;
    for (int i = 0; i < sum; i++)
    {
        n += *ptr;
        ptr++;
    }
    return n;
}

void main()
{
    printf("Enter the size of array:");
    int n;
    scanf("%d", &n);
    int *arr = malloc(n * sizeof(int));
    int *ptr;
    ptr = arr;
    takeInput(ptr, n);
    printf("%d", sumOfArray(arr, n));
    free(arr);
}