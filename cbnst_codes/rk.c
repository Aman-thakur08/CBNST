#include<stdio.h>
float f(float x,float y)
{
    return (x-y)/(x+y);
}
int main()
{
    int n;
    float x0,y0,x,h,a,b,k;
    scanf("%f%f%f",&x0,&y0,&x);
    scanf("%d",&n);
    h=(x-x0)/(float)n;
    a=x0;
    b=y0;
    for(int i=0;i<=n;i++){
        float k1=h*f(a,b);
        float k2=h*f(a+(h/2.0),b+(k1/2.0));
        float k3=h*f(a+(h/2.0),b+(k2/2.0));
        float k4=h*f(a+h,b+k3);
        k=(k1+(k2+k3)*2.0+k4)/(6.0);
        printf("%f\t%f\n",a,b);
        a=a+h;
        b=b+k;
    }
}
