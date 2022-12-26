#include<stdio.h>
#include<math.h>
float f(float x)
{
    return x*x+4*sin(x);
}
int main()
{
    float x1,x2,x;
    for(x2=0;x2<=5;x2++)
    {
        if(f(x2)>0)
            break;
    }
    for(x1=x2-1;x1>=-5;x1--)
    {
        if(f(x1)<0)
            break;
    }
    printf("%f,%f",x1,x2);
    float y=0;
    do
    {
        x=(x1+x2)/2;
        printf("%f\n",x);
        if(f(x)*f(x1)<0)
        {
            y=x2;
            x2=x;
        }
        else
        {
            y=x1;
            x1=x;
        }
    }while(fabs(x2-y)>=0.0001&&fabs(x1-y)>=0.0001);
}
