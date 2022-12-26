#include<stdio.h>
#include<math.h>
float f(float x)
{
    return x*x+4*sin(x);
}
int main()
{
    float x1,x2,y1,y2,x;
    for(x2=0;x2<=5;x2++)
    {
        if(f(x2)>0) break;
    }
    for(x1=x2-1;x1>=-5;x1--)
    {
        if(f(x1)<0) break;
    }
    float y=0;
    printf("%f,%f",x1,x2);
    do
    {
        y1=f(x1);
        y2=f(x2);
        x=(x1*y2-x2*y1)/(y2-y1);
        printf("%f\n",x);
        if(y2*f(x)<0)
        {
            y=x1;
            x1=x;
        }
        else{
            y=x2;
            x2=x;
        }
    }while(fabs(x-y)>=0.0001);
}
