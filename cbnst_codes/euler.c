#include<stdio.h>
#include<math.h>
float f(float x,float y)
{
    return (y-x)/(x+y);
}
int main()
{
    int n;
    float x0,x,y0,h;
    printf("Enter x,y:");
    scanf("%f%f",&x0,&y0);
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter x:");
    scanf("%f",&x);
    float y[n+1];
    h=fabs(x-x0)/(float)n;
    y[0]=y0;
    for(int i=1;i<=n;i++)
    {
        y[i]=y[i-1]+h*f(x0+(i-1)*h,y[i-1]);
    }
    printf("%f",y[n]);
}
