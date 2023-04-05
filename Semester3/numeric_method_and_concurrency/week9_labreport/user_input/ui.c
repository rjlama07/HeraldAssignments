#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>

int diff, start = 1, finish;
void *thread(void *p)
{
    for(int i=0;i<=finish;i++)
    {
        printf("%d\n",i);
    }
    start+=diff;
    finish+=diff;

}
void main(){
    pthread_t *thId;
    int num=1000,y;
    printf("Enter the number of threads");
    scanf("%d",&y);
    if(num%y==0)
    {
        thId=(pthread_t *)malloc(y*sizeof(pthread_t));
        diff=num/y;
        finish=diff;
        for(int i=0;i<y;i++)
        {
            pthread_create(&thId[i],NULL,thread,NULL);
        }
        for(int i=0;i<y;i++)
        {
            pthread_join(thId[i],NULL);
        }
    }
    else
    {
        printf("Threads cannot be created");
        
    }
}