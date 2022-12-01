#include<Stdio.h>
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

void checkPerfectNumber(int a){
int sum=0;
int i;
int initaialnum=a;
printf("%d\n",initaialnum);
  for( i=0;i<initaialnum;i++)
  {
    printf("ja\n");
    if(initaialnum%i==0)
    {
        sum=sum+i;    
    }
    
    
  }
  printf("%d",sum);
   
  
  // if(b==sum)
  //  {
  //   printf("The number is perfect number");
  //  }
  //  else
  //  {
  //   printf("The number is not perfect number");
  //  }
}



void main(){
    int a;
     printf("Enter a number:");
     scanf("%d",&a);
     checkArmstrong(a);
     checkPerfectNumber(a);


}