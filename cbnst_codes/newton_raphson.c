#include<stdio.h>
#include<math.h>
float f(float x)
{
    return x*x*x-2-x-5;
}
float fd(float x)
{
    return 3*x*x-2;
}
int main()
{
    float x,x1,x2,y;
    for(x2=0;;x2++)
    {
        if(f(x2)>0) break;
    }
    for(x1=x2-1;;x1--)
    {
        if(f(x1)<0) break;
    }
    printf("%f,%f",x1,x2);
    x=(x1+x2)/2;
    do
    {
        printf("%f\n",x);
        x=x-f(x)/fd(x);
        if(f(x2)*f(x)<0){
            y=x1;
            x1=x;
        }
        else
        {
            y=x2;
            x2=x;
        }
    }while(fabs(x-y)>=0.0001);
}
