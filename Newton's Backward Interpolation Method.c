#include<stdio.h>

int main()
{
    float u,s,p=1,X,h,x[10],y[10][10];
    int i,j,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("\nEnter the values of x: ");
    for(i=0;i<=n;i++)
    {
        scanf("%f",&x[i]);
    }
    printf("\nEnter the values of y: ");
    for(i=0;i<=n;i++)
    {
        scanf("%f",&y[0][i]);
    }
    h=x[1]-x[0];
    for(i=1;i<=n;i++)
    {
        for(j=0;j<=n-i;j++)
        {
            y[i][j]=y[i-1][j+1]-y[i-1][j];
        }
    }
    printf("\nEnter the required x value: ");
    scanf("%f",&X);
    u=(X-x[n])/h;
    s=y[0][n];
    for(i=1;i<=n;i++)
    {
       p=p*(u+i-1)/i;
       s=s+p*y[i][n-i];
    }
    printf("The final value is %f",s);
    return 0;
}

