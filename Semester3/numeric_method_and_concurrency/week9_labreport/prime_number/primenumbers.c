#include<stdio.h>
#include<pthread.h>


void primeNumbers(int start,int end)
{

     for (int i=start;i<end;i++)
    {
        int j;
      for(j=2;j<=i-1;j++)
      {
        if(i%j==0)
        {
            break;
        } 
      }
      if(i==j)
        {
            printf("%d\n",i);
        }
    }
}
void *threadOne(void *p){
    primeNumbers(1,250);
    
}
void *threadTwo(void *p){
    primeNumbers(250,500);
}

void main(){
    pthread_t th1,th2;
    pthread_create(&th1,NULL,threadOne,NULL);
    pthread_create(&th2,NULL,threadTwo,NULL);
    pthread_join(th1,NULL);
    pthread_join(th2,NULL);
}