#include<stdio.h>

void swap(int *a,int *b){
    int n=*a;
    *a=*b;
    *b=n;
}
void main(){
    int a=5;
    int b=10;
    printf("Numbers before swapped\n");
    printf("%d\n",a);
    printf("%d\n",b);
    swap(&a,&b);
    printf("Numbers After swapped\n");
    printf("%d\n",a);
    printf("%d\n",b);   
    

}