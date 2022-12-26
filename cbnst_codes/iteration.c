#include<stdio.h>
#include<math.h>
float f(float x)
{
    return x*x+4*sin(x);
}
float fx(float x)
{
    return sqrt(4*sin(x));
}
float fd(float x)
{
    return cos(x)*(4/2)/(sqrt((4*sin(x))));
}
int main()
{
    float x1,x2,x,y=0;
    for(x2=0;x2<=5;x2++)
    {
        if(f(x2)>0) break;
    }
    for(x1=x2-1;x2>=-5;x1--)
    {
        if(f(x1)<0) break;
    }
    if(fabs(fd(x1))>1&&fabs(fd(x2))>1)
    {
        return 0;
    }
    x=(x1+x2)/2;
    do
    {
        printf("%f\n",x);
        y=x;
        x=fx(x);
    }while(fabs(x-y)>=0.0001);
}
