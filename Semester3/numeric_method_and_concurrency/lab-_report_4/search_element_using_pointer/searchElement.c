#include<stdio.h>
#include<malloc.h>

void main()
{
    int arr[5]={10,7,23,32,3};
    int s;
    printf("Enter to search:");
    scanf("%d",&s);
    int *p=&arr[0];
    int i;
    for (i=0;i<5;i++,p++)
    {
        if(s==arr[i])
        {
            printf("Your element Exist");
            break;
        }


    }
    if(i==5)
    {
        printf("Your element doesn't Exist");
    }
       
}