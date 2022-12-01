#include<stdio.h>

int cube(int x){
    int c=x*x*x;
    return c;  
}

void main(){
    int a;
    printf("Enter number:");
    scanf("%d",&a);
    printf("%d",cube(a));

}