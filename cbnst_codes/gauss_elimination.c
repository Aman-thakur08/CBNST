#include<stdio.h>
void upmat(int n,float a[][n+1])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i<j)
            {
                float ratio=a[j][i]/a[i][i];
                for(int k=0;k<=n;k++)
                {
                    a[j][k]-=(ratio*a[i][k]);
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            printf("\n");
            for(int j=0;j<=n;j++)
            {
                printf("%f  ",a[i][j]);
            }
        }
    }
}
void backsub(int n,float a[][n+1],float v[])
{
    v[n-1]=a[n-1][n]/a[n-1][n-1];
    for(int i=n-2;i>=0;i--)
    {
        float sum=0;
        for(int j=i+1;j<n;j++)
        {
            sum+=a[i][j]*v[j];
        }
        v[i]=(a[i][n]-sum)/a[i][i];
    }
    for(int i=0;i<n;i++)
    {
        printf("\n%f",v[i]);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    float a[n][n+1];
    for(int i=0;i<n;i++)
    {
        for(int k=0;k<=n;k++)
        {
            scanf("%f",&a[i][k]);
        }
    }
    float v[n];
    upmat(n,a);
    backsub(n,a,v);
}
