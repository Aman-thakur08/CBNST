#include<stdio.h>
#include<math.h>
int main()
{
    int n,fact;
    float u,u1,x,y;
    scanf("%d",&n);
    float a[n][n+1];
    for(int i=0;i<n;i++)
    {
        scanf("%f",&a[i][0]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%f",&a[i][1]);
    }
    for(int j=2;j<=n;j++)
    {
        for(int i=0;i<n-j+1;i++)
        {
            a[i][j]=a[i+1][j-1]-a[i][j-1];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=n-i;j++)
        {
            printf("%f ",a[i][j]);
        }
        printf("\n");
    }
    scanf("%f",&x);
    u=(x-a[n-1][0])/(a[1][0]-a[0][0]);
    u1=u;
    y=a[n-1][1];
    fact=1;
    int j=2;
    for(int i=n-2;i>=0;i--)
    {
        y+=(u1*a[i][j])/fact;
        fact*=j;
        u1*=(u+(j-1));
        j++;
    }
    printf("\n%f ",y);
}
