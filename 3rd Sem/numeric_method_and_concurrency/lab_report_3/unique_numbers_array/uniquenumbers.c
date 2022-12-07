#include<stdio.h>

void newList(int a[10]){
    int i,j;
   for( i=0;i<9;i++)
   {
    for( j=i+1;j<i;j++)
    {
        if (a[i]=a[j])
        printf("%d\n",a[i]);
        break;    
    }
    if(i=j)
    printf("%d\n",a[i]);
   }  

}

void main(){

    int a[10]={1,2,4,8,4,2,4,9,6};
    newList(a);


}