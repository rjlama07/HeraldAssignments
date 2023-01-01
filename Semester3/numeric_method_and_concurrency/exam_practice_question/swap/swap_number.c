#include <stdio.h>

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
void main()
{
    int a = 10;
    int b = 20;
    swap(&a, &b);
    printf("a=%d\n", a);
    printf("b=%d", b);
}