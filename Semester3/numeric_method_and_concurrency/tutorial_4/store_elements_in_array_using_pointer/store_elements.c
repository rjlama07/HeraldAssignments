#include<stdio.h>
#include<malloc.h>

void main()
{
    int arr[5];;
    int *p=&arr[0];
    printf("Enter the elements\n");
    for (int i=0;i<5;i++,p++)
    {
     scanf("%d",p);
    }    
    printf("Elements are\n");
    for (int i=0;i<5;i++)
    {
     printf("%d\n",arr[i]);
    }    
}