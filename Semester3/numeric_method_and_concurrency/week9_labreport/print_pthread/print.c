#include <pthread.h>
#include <stdio.h>

void *threadOne(void *p)
{
    for (int i = 1; i < 250; i++)
    {
        printf("%d\n", i);
    }
}

void *threadTwo(void *p)
{
    for (int i = 250; i < 500; i++)
    {
        printf("%d\n", i);
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