#include <stdio.h>
void main()
{
#pragma omp parallel
    printf("Hello world from OpenMP!\n");
}