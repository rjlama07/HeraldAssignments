#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("Enter the lenght of array:");
    int n;
    scanf("%d", &n);
    int *array1 = malloc(n * sizeof(int));
    int *array2 = malloc(n * sizeof(int));
    int *array3 = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element of array 1:", (i + 1));
        scanf("%d", &array1[i]);
        printf("Enter %d element of array 2:", (i + 1));
        scanf("%d", &array2[i]);
        array3[i] = array1[i] + array2[i];
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", array3[i]);
    }
}