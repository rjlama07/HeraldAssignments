#include<stdio.h>
#include<malloc.h>

void main()
{
    int arr[5]={10,7,23,32,3};
    int *p=&arr[0];
    int sum=0;
    for (int i=0;i<5;i++,p++)
    {
        sum+=*p;
    }
    printf("%d",sum);    
}