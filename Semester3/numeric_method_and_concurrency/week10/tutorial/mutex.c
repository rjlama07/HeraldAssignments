#include <pthread.h>
#include <stdio.h>
#include <windows.h>
#include <semaphore.h>

int shared = 1;
pthread_mutex_t l;
void *fun1()
{
    int x;
    printf("Thread1 trying to accquire lock\n");
    pthread_mutex_lock(&l);
    printf("Thread1 accquired lock\n");
    x = shared;
    printf("THread1 reads the value of shared variable as %d\n", x);
    x++;
    printf("Local updation by THread1: %d\n", x);
    Sleep(1);
    shared = x;
    printf("Value of shared variable updated bu thread1 is %d\n", shared);
    pthread_mutex_unlock(&l);
    printf("Thread1 released the lock\n");
}
void *fun2()
{
    int y;
    printf("Thread2 trying to accuire lock\n");
    pthread_mutex_lock(&l);
    printf("Thread2 accquired lock\n");
    y = shared;
    printf("THread2 reads the value as %d\n", y);
    y--;
    printf("Local updation bu Thread2: %d\n", y);
    Sleep(1);
    shared = y;
    printf("value of shatred variable updated bu Thread2 is: %d\n", shared);
    pthread_mutex_unlock(&l);
    printf("Thread2 realeased the lock\n");
}

void main()
{
    pthread_mutex_init(&l, NULL);
    pthread_t thread1, thread2;
    pthread_create(&thread1, NULL, fun1, NULL);
    pthread_create(&thread2, NULL, fun2, NULL);
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    printf("Final value of shared is %d\n", shared);
}
