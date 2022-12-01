#include<stdio.h>

void  checkArmstrong(int a){
    int sum=0;
    int initaialnum=a;
    int n;
   while(a>0)
   {
    n=a%10;
    sum+=(n*n*n);
    a=a/10;
   }
   if(initaialnum==sum)
   {
    printf("The number is armStrong\n");
   }
   else
   {
    printf("The number is not armStrong\n");
   }
}

void checkPerfectNumber(int num)

{
  for(int i=0;i<num;i++)
  {
    printf("Work");
  }
}


void main(){
    int a;
     printf("Enter a number:");
     scanf("%d",&a);
     checkArmstrong(a);
     checkPerfectNumber(a);
     

     
}