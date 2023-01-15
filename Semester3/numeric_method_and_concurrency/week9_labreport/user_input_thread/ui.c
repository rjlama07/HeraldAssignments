#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

int startingVariable;

void *thread(void *p)
{
    for (int i = 1; i < startingVariable; i++)
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
    startingVariable += startingVariable;
}
void main()
{
    int x;
    printf("Enter number of threads");
    scanf("%d", &x);
    if (500 % x != 0)
    {
        printf("Not possible");
    }
    else
    {
        startingVariable = 500 / x;
        int i;
        pthread_t *t;
        t = (pthread_t *)malloc(x * sizeof(pthread_t));
        for (i = 0; i < x; i++)
        {
            pthread_create(&t[i], NULL, thread, NULL);
        }
        for (i = 0; i < x; i++)
        {
            pthread_join(t[i], NULL);
        }
        free(t);
    }
}