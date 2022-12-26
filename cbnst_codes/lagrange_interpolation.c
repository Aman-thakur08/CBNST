#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    float X[n],Y[n],y,x,t,sum=0;
    for(int i=0;i<n;i++)
        scanf("%f",&X[i]);
    for(int i=0;i<n;i++)
    {
        scanf("%f",&Y[i]);
    }
    scanf("%f",&x);
    for(int i=0;i<n;i++)
    {
        t=1;
        for(int j=0;j<n;j++)
        {
           if(i!=j)
           {
               t*=((x-X[j])/(X[i]-X[j]));
           }

        }
        sum+=t*Y[i];
    }
    printf("%f",sum);
}
