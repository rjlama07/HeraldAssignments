#include <stdio.h>
void main()
{
    int arr[5] = {4, 2, 1, 6, 7};
    int t;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j <= 5; j++)
        {
            if (arr[i] > arr[j])
            {
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", arr[i]);
    }
}