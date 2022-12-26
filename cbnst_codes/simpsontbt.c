#include<stdio.h>
#include<math.h>
float f(float x)
{
    return 1/(x*x+1);
}
int main()
{
    int n;
    float a,b,h,sum=0;
    scanf("%d",&n);
    scanf("%f%f",&a,&b);
    h=(b-a)/(float)n;
    sum=f(a)+f(b);
    int step=1;
    for(float i=a+h;i<b;i=i+h)
    {
        if(step%3!=0)
        {
            sum+=3*f(i);
        }
        else{
            sum+=2*f(i);
        }
        step++;
    }
    sum*=(3*h/8.0);
    printf("%f",sum);
}

