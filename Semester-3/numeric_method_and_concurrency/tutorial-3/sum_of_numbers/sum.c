#include<stdio.h>

int sum(int a[10]){
    int add=0;
    for(int i=0;i<10;i++)
    {
        add+=a[i];
        
    }
    return add;

}
void main(){
    int a[10];
    printf("Enter the numbers:");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        
    }
    
    printf("The sum is %d",sum(a));

}
