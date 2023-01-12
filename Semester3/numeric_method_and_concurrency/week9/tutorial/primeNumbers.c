#include <pthread.h>
#include <stdio.h>

void *threadOne(void *p)
{
    for (int i = 1; i < 1000; i++)
    {
        int check = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                check = 1;
            }
        }
        if (check == 0)
        {
            printf("Prime numbers: %d\n", i);
        }
    }
}

void *threadTwo(void *p)
{
    for (int i = 1; i < 1000; i++)
    {
        int check = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                check = 0;
            }
        }
        if (check == 0)
        {
            printf("NON prime:%d\n", i);
        }
    }
}

void main()
{
    pthread_t thrId1, thrId2;
    pthread_create(&thrId1, NULL, threadOne, NULL);
    pthread_create(&thrId2, NULL, threadTwo, NULL);
    pthread_join(thrId1, NULL);
    pthread_join(thrId2, NULL);
}