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

void checkPerfectNumber(int a)

{
  int sum=0;
  for(int i=1;i<a;i++)
  {
    if(a%i==0)
    {
        sum+=i;
    }
  }
  

    if(a==sum)
   {
    printf("The number is perfect number\n");
   }
   else
   {
    printf("The number is not perfect number\n");
   }
}


void main(){
    int a;
     printf("Enter a number:");
     scanf("%d",&a);
     checkArmstrong(a);
     checkPerfectNumber(a);
     

     
}