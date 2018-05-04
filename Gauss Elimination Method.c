#include<stdio.h>

int main()
{
    int i,j,k,n;
    float sum,m,x[10][10],a[10];
    printf("Enter the order of matrix: ");
    scanf("%d",&n);
    printf("\nEnter the elements of the matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<=n;j++)
        {
            scanf("%f",&x[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            m=x[j][i]/x[i][i];
            for(k=0;k<=n;k++)
            {
                x[j][k]=x[j][k]-m*x[i][k];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<=n;j++)
        {
            printf("%f ",x[i][j]);
        }
        printf("\n");
    }
    a[n-1]=x[n-1][n]/x[n-1][n-1];
    for(i=n-2;i>=0;i--)
    {
        sum=x[i][n];
        for(j=n-1;j>i;j--)
        {
            sum=sum-x[i][j]*a[j];
        }
        a[i]=sum/x[i][i];
    }
    printf("\nThe solutions are:\n");
    for(i=0;i<n;i++)
        {
            printf("%f ",a[i]);
        }
    return 0;
}
