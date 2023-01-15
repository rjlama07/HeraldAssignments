#include <pthread.h>
#include <stdio.h>

void *threadOne(void *p)
{
    for (int i = 1; i < 1000; i++)
    {
        printf("Thread 1:%d\n", i);
    }
}

void *threadTwo(void *p)
{
    for (int i = 1; i < 200; i++)
    {
        printf("Thread 2:%d\n", i);
    }
}
void *threadThree(void *p)
{
    for (int i = 200; i < 400; i++)
    {
        printf("Thread 3:%d\n", i);
    }
}
void *threadFour(void *p)
{
    for (int i = 400; i < 600; i++)
    {
        printf("Thread 4:%d\n", i);
    }
}
void *threadFive(void *p)
{
    for (int i = 600; i < 1000; i++)
    {
        printf("Thread 5:%d\n", i);
    }
}

void main()
{
    pthread_t thrId1, thrId2, thrId3, thrId4, thrId5;
    pthread_create(&thrId1, NULL, threadOne, NULL);
    pthread_create(&thrId2, NULL, threadTwo, NULL);
    pthread_create(&thrId3, g NULL, threadThree, NULL);
    pthread_create(&thrId4, NULL, threadFour, NULL);
    pthread_create(&thrId5, NULL, threadFive, NULL);
    pthread_join(thrId1, NULL);
    pthread_join(thrId2, NULL);
    pthread_join(thrId3, NULL);
    pthread_join(thrId4, NULL);
    pthread_join(thrId5, NULL);
}