#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    float x[n],y[n],sum_x=0,sum_y=0,sum_x2=0,sum_xy=0;
    for(int i=0;i<n;i++)
    {
        scanf("%f",&x[i]);
        sum_x+=x[i];
        sum_x2+=x[i]*x[i];
    }
    for(int i=0;i<n;i++)
    {
        scanf("%f",&y[i]);
        sum_y+=y[i];
        sum_xy+=x[i]*y[i];
    }
    float a=(sum_x2*sum_y-sum_xy*sum_x)/(n*sum_x2-sum_x*sum_x);
    float b=(n*sum_xy-sum_x*sum_y)/(n*sum_x2-sum_x*sum_x);
    printf("%f\t%f\n",a,b);
}
