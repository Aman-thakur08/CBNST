#include<stdio.h>
void upmat(int n,float a[][n+1])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                float ratio=a[j][i]/a[i][i];
                for(int k=0;k<=n;k++)
                {
                    a[j][k]-=a[i][k]*ratio;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            printf("\n");
            for(int j=0;j<=n;j++)
            {
                printf("%f ",a[i][j]);
            }
        }
    }
}
void bac(int n,float a[][n+1],float v[])
{
    for(int i=n-1;i>=0;i--)
    {
        v[i]=(a[i][n])/a[i][i];
    }
    for(int i=0;i<n;i++)
    {
        printf("\n%f\n",v[i]);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    float a[n][n+1];
    float v[n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            scanf("%f",&a[i][j]);
        }
    }
    upmat(n,a);
    bac(n,a,v);
}
