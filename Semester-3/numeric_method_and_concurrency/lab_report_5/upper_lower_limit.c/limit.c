#include <stdio.h>
struct UpperLower
{
    int upperLimit;
    int lowerLimit;
};

void printData(struct UpperLower ul)
{
    for (int i = ul.lowerLimit + 1; i < ul.upperLimit; i++)
    {
        printf("%d\n", i);
    }
}
void main()
{

    struct UpperLower ul;
    printf("Input lower limit:");
    scanf("%d", &ul.lowerLimit);
    printf("\nInput Upper limit:");
    scanf("%d", &ul.upperLimit);
    printData(ul);
}