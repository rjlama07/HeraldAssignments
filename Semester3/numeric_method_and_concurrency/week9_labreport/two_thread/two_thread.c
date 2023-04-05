#include<stdio.h>
#include<pthread.h>

void *threadOne(void *p){
    for(int i=1;i<500;i++)
    {
        printf("From first thread:%d\n",i);
    }
}
void *threadTwo(void *p){
    for(int i=500;i<=1000;i++)
    {
        printf("From second thread:%d\n",i);
    }
}

void main(){
    pthread_t th1,th2;
    pthread_create(&th1,NULL,threadOne,NULL);
    pthread_create(&th2,NULL,threadTwo,NULL);
    pthread_join(th1,NULL);
    pthread_join(th2,NULL);
}