#include<stdio.h>

int main()
{
    float sum=0.0,p,X,x[10],y[10];
    int i,j,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("\nEnter the values of x: ");
    for(i=0;i<n;i++)
    {
        scanf("%f",&x[i]);
    }
    printf("\nEnter the values of y: ");
    for(i=0;i<n;i++)
    {
        scanf("%f",&y[i]);
    }
    printf("\nEnter the required x value: ");
    scanf("%f",&X);
    for(i=0;i<n;i++)
    {
        p=1.0;
        for(j=0;j<n;j++)
        {
            if (j!=i)
                p=p*(X-x[j])/(x[i]-x[j]);
        }
        sum=sum+p*y[i];
    }

    printf("The final value is %f",sum);
    return 0;
}
