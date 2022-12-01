//v=u+at
//v=20,a=5/t=2,u=10


#include<stdio.h>
#include<math.h>

float checkVelocity(float v,float u,float a,float t){
    if(isnan(u))
    {
        u=v-(a*t);
        printf("Missing variable was U");
        return u;
    }
    else if(isnan(a))
    {
        a=(v-u)/t;
        printf("Missing variable was a");
        return a;
    }
    else if(isnan(v))
    {
        v=u+(a*t);
        printf("Missing variable was v");
        return v;
    }
    else if(isnan(t))
    {
        t=(v-u)/t;
        printf("Missing variable was t");
        return t;
    }



}

void main(){
    float v=20,u=10,a=NAN,t=2;
    printf("\nThe values is:%2f",checkVelocity(v,u,a,t));



}