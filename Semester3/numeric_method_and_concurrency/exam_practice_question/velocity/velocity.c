#include <stdio.h>
#include <math.h>

float velocityCalc(float v, float u, float a, float t)
{
    if (isnan(v))
    {
        v = u + (a * t);
        return v;
    }
    else if (isnan(u))
    {
        return v - (a * t);
    }
    else if (isnan(a))
    {
        return (v - u) / t;
    }
    else if (isnan(t))
    {
        return (v - u) / a;
    }
    else
    {
        return 0;
    }
}

void main()
{
    float v, u, a, t;
    v = 30;
    u = 10;
    a = 10;
    t = NAN;
    float reasult = velocityCalc(v, u, a, t);
    printf("The value is %2f", reasult);
}