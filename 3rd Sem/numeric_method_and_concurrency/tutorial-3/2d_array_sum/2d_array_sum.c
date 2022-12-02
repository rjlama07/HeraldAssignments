#include<stdio.h>

void main()
{
    int a[2][2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("Enter %d%d element:\n",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    
    for(int i=0;i<2;i++)
    {
        int sum=0;
        for(int j=0;j<2;j++)
        {
            sum=sum+a[i][j];  
        }
        printf("Sum %d is %d\n",i+1,sum);
    }

}