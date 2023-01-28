#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
int counter = 0;
pthread_mutex_t mutex;

void *threadOne(void *p)
{
    int i;
    int temp;
    for(i=1; i<=3; i++)
    {
        pthread_mutex_lock(&mutex);
        temp = counter;
        sleep(1);
        counter = temp +1;
        pthread_mutex_unlock(&mutex);
    }
}

void *threadTwo(void *p)
{
    int i;
    int temp;
    for (i=1; i<=3; i++)
    {
        pthread_mutex_lock(&mutex);
        temp = counter;
        sleep(1);
        counter = temp - 1;
        pthread_mutex_unlock(&mutex);
    }
}

void main()
{
    pthread_t thrID1, thrID2;
    pthread_mutex_init(&mutex, NULL);
    pthread_create(&thrID1, NULL, threadOne, NULL);
    pthread_create(&thrID2, NULL, threadTwo, NULL);

    pthread_join(thrID1, NULL);
    pthread_join(thrID2, NULL);
    pthread_mutex_destroy(&mutex);
    printf("counter = %d\n", counter);
}
