// x=(c*e)-(b*f)/(a*e)
//y=(a*f)-(c*d)

#include<Stdio.h>

void equations(double a,double b,double c,double d,double e,double f){
    double x=(c*e)-(b*f)/(a*e);
    double y=(a*f)-(c*d);
    printf("The value of x is %2f",x);
    printf("The value of y is %2f",y);
}


void main(){
    double a,b,c,d,e,f;
    printf("Enter a:");
    scanf("%f",&a);
    printf("Enter b:");
    scanf("%f",&b);
    printf("Enter c:");
    scanf("%f",&c);
    printf("Enter d:");
    scanf("%f",&d);
    printf("Enter e:");
    scanf("%f",&e);
    printf("Enter f:");
    scanf("%f",&f);
    equations(a,b,c,d,e,f);

}
