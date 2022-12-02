//WAP to sort array elements in ascending order



#include<stdio.h>

void main(){
    int a[5]={10,5,32,1,3};
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
          {
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
          }
        }      
    printf("%d\n",a[i]);
    }


}