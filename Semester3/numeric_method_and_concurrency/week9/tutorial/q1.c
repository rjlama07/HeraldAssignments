
#include <pthread.h>
#include <stdio.h>
#include <windows.h>

void *first(void *p)
{
    while (1)
    {
        Sleep(10);
        printf("I am from 1st function\n");
    }
}
void second()
{
    while (1)
    {
        Sleep(2);
        printf("I am from 1st function\n");
    }
}
void main()
{
    pthread_t thread1;
    pthread_create(&thread1, NULL, first, NULL);
    second();
}

// for running
// gcc test.c -pthread -o test