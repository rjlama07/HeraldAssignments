#include<Stdio.h>

void checkDivisible(int a[]){
    int c=0;
    int sum=0;
for(int i=0;i<6;i++)
{
 if(a[i]%5==0 && a[i]%3!=0 && a[i]%2!=0)
 {
   sum+=a[i];
   c+=1;;
 }
} 
printf("Count is %d\n",c);
printf("Sum is %d\n",sum);
}

void main()
{
    int a[]={15,25,35,33,22,55};
    checkDivisible(a);   
}