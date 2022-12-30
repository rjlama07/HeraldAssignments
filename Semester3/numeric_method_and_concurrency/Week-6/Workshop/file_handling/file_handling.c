#include <stdio.h>

void main()
{
    FILE *fp;
    int x, y;
    fp = fopen("text.txt", "w");
    printf("Enter value of x:");
    scanf("%d", &x);
    printf("Enter value of y:");
    scanf("%d", &y);
    fprintf(fp, "You entered x=%d y=%d\n", x, y);
    fp = fopen("text.txt", "r");
    while (!feof(fp))
    {
        fscanf(fp, "The value of x is %d. The value of y is %d.", &x, &y);
    }
    printf("The final values are: %d and %d.\n", x, y);
    fclose(fp);
    return 0;
}