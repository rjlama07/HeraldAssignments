#include <stdio.h>
#include "/usr/local/opt/libomp/include/omp.h"

void main()
{
    int i, c;
    printf("Prime numbers between 1 and 1000 are :\n");
#pragma omp prallel for num_threads(5)
    for (i = 1; i <= 1000; i++)
    {

        for (c = 2; c <= i - 1; c++)
        {
            if (i % c == 0)
                break;
        }
        if (c == i)
        {
            int a = omp_get_thread_num();
            printf("Thread number: %d\n", a);

            printf("%d\n", i);
        }
    }
}