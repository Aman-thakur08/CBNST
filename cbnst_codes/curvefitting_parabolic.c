#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    float sum_x=0,sum_y=0,sum_x2=0,sum_x3=0,sum_x4=0,sum_xy=0,sum_x2y=0;
    float x[n],y[n];
    for(int i=0;i<n;i++)
    {
        scanf("%f",&x[i]);
        sum_x+=x[i];
        sum_x2+=x[i]*x[i];
        sum_x3+=x[i]*x[i]*x[i];
        sum_x4+=x[i]*x[i]*x[i]*x[i];
    }
    for(int i=0;i<n;i++)
    {
        scanf("%f",&y[i]);
        sum_y+=y[i];
        sum_xy+=x[i]*y[i];
        sum_x2y+=x[i]*x[i]*y[i];
    }
    printf("%f\t%f\t%f\t%f\t%f\t%f\t%f",sum_x,sum_y,sum_x2,sum_x2y,sum_xy,sum_x3,sum_x4);
    float a[3][4];
    a[0][0]=sum_x2;
    a[0][1]=sum_x;
    a[0][2]=n;
    a[0][3]=sum_y;
    a[1][0]=sum_x3;
    a[1][1]=sum_x2;
    a[1][2]=sum_x;
    a[1][3]=sum_xy;
    a[2][0]=sum_x4;
    a[2][1]=sum_x3;
    a[2][2]=sum_x2;
    a[2][3]=sum_x2y;
    for(int i=0;i<3;i++)
    {
        printf("\n");
        for(int j=0;j<=3;j++)
        {
            printf("%f ",a[i][j]);
        }
    }
    n=3;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i<j)
            {
                float ratio=a[j][i]/a[i][i];
                for(int k=0;k<=n;k++)
                {
                    a[j][k]-=ratio*a[i][k];
                }
            }
        }
    }
    float v[n];
    v[n-1]=a[n-1][n]/a[n-1][n-1];
    for(int i=n-2;i>=0;i--)
    {
        float sum=0;
        for(int j=i+1;j<n;j++)
        {
            sum+=(a[i][j]*v[j]);
        }
        v[i]=(a[i][n]-sum)/a[i][i];

    }
    for(int i=0;i<n;i++)
        printf("\n%f\n",v[i]);
}
