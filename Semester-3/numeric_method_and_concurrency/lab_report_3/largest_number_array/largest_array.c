

#include<stdio.h>

void main(){
    int a[5]={5,30,10,4,200};
    for(int i=1;i<5;i++)
    {
         if(a[0]<a[i]){       
            a[0]=a[i];
           
        }
    }
    printf("Largest number is %d",a[0]);
}