#include<stdio.h>
#include<math.h>
float f(float x)
{
    return log(x);
}
int main()
{
    float i,a,b,h,sum=0;
    int n,step=0;
    scanf("%d",&n);
    scanf("%f%f",&a,&b);
    h=(b-a)/(float)n;
//    float y[n+1];

    sum=f(a)+f(b);
    for(i=a+h;i<b;i=i+h)
    {
        sum+=2*(f(i));
    }
    sum*=(h/2.0);
    printf("%f",sum);
}
