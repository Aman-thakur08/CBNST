#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool appl(int n,float a[][n+1])
{
    for(int i=0;i<n;i++)
    {
        float sum=0;
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                sum+=a[i][j];
            }
        }
        if(sum>a[i][i]) return false;
    }
    return true;
}
int main()
{
    int n;
    scanf("%d",&n);
    float a[n][n+1];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            scanf("%f",&a[i][j]);
        }
    }
    if(!(appl(n,a))) return 0;
    float v[n];
    for(int i=0;i<n;i++)
        scanf("%f",&v[i]);
    int flag,itr=0;
    do
    {
        itr++;
        flag=0;
        for(int i=0;i<n;i++)
        {
            float sum=0,x;
            for(int j=0;j<n;j++)
            {
                if(i!=j)
                {
                    sum+=a[i][j]*v[j];
                }
            }
            x=(a[i][n]-sum)/a[i][i];
            if(fabs(x)-fabs(v[i])<=0.0001) flag++;
            v[i]=x;
        }
        for(int i=0;i<n;i++)
            printf("\n%f",v[i]);
    }while(flag!=n);
}
