
#include<stdio.h>
void newList(int a[10]){
   for(int i=0;i<10;i++)
   {
    int j;
    for( j=i+1;j<10;j++)
    {
        if (a[i]==a[j])
        {
            break;
        }
    }
    if(j==10)
    printf("%d\n",a[i]);
   }  
}

void main(){

    int a[10]={1,2,4,8,4,2,4,9,6,10};
    newList(a);
}