#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    float x[n],y[n],u,d[10][10],a;
    for(int i=0;i<n;i++)
    {
        scanf("%f",&x[i]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%f",&y[i]);
    }
    scanf("%f",&a);
    for(int i=0;i<n-1;i++)
    {
        d[i][1]=y[i+1]-y[i];
    }
    for(int j=2;j<=4;j++)
    {
        for(int i=0;i<n-j;i++)
        {
            d[i][j]=d[i+1][j-1]-d[i][j-1];
        }
    }

    int i=0;
    i--;
    do
    {
        i++;
    }while(x[i]<a);
    for(int i=0;i<n;i++)
    {
        printf("%f ",y[i]);
        for(int j=1;j<n-i;j++)
        {
            printf("%f ",d[i][j]);
        }
        printf("\n");
    }
    u=(a-x[i])/(x[1]-x[0]);
    float y1=u*d[i][1];
    float y2=u*(u-1)*d[i-1][2]/2;
    float y3=u*(u-1)*(u+1)*d[i-2][3]/6;
    float y4=u*(u-1)*(u+1)*(u-2)*d[i-3][4]/24;
    printf("%f ",y[i]+y1+y2+y3+y4);
}
