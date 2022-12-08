#include<stdio.h>


void main(){
    int a[20]={1,2,3,4,5,6,7,8,9,15,11,12,13,14,15,16,17,18,19,20};
    for (int i=0;i<20;i++)
    {
      if(i==9)
      {
        a[i]=a[i]+5;   
      }
      printf("%d\n",a[i]);
    }

}