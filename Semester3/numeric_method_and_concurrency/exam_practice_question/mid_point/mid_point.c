#include <stdio.h>

void midPoint(x1, x2, y1, y2)
{
    float x_midpoint = (x1 + x2) / 2;
    float y_midpoint = (y1 + y2) / 2;
    printf("Mid point of x is %f\n", x_midpoint);
    printf("Mid point of y is %f", y_midpoint);
}

void main()
{
    int x1, x2, y1, y2;
    printf("Enter a x1");
    scanf("%d", &x1);
    printf("Enter a x2");
    scanf("%d", &x2);
    printf("Enter y1");
    scanf("%d", &y1);
    printf("Enter y2");
    scanf("%d", &y2);
    midPoint(x1, x2, y1, y2);
}