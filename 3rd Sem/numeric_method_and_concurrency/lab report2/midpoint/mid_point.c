#include<stdio.h>

float midPoint(float a,float b){
    float m=(a+b)/2;
    return m;

}

void main(){
    float x1,x2,y1,y2;
    printf("Enter x1:");
    scanf("%f",&x1);
    printf("Enter x2:");
    scanf("%f",&x2);
    printf("Enter y1:");
    scanf("%f",&y1);
    printf("Enter y2:");
    scanf("%f",&y1);
    printf("Mid point of X:%2f\n",midPoint(x1,x2));
    printf("Mid point of Y:%2f",midPoint(y1,y2));


}