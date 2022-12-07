#include<stdio.h>

void newList(int a[10]){
    int i,j;
   for( i=0;i<10;i++)
   {
    for( j=0;j<10;j++)
    {
        if (a[i]=a[j])
        break;    
    }
    if(i=j)
    printf("%d",a[i]);
   }  

}

void main(){

    int a[10]={1,2,4,3,2,3,5,6,10,12};
    newList(a);


}