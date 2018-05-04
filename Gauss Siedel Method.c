#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,n,t,flag=0;
    float e,sum,x[10][10],a[10],b[10];
    printf("Enter the order of matrix: ");
    scanf("%d",&n);
    printf("Enter the desired accuracy: ");
    scanf("%f",&e);
    printf("\nEnter the elements of the matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<=n;j++)
        {
            scanf("%f",&x[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        sum=0.0;
        for(j=0;j<n;j++)
        {
            if (i!=j)
                sum=sum+fabs(x[i][j]);
        }
        if(fabs(x[i][i])<sum)
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        printf("System is not diagonally dominant.");
    }
    else
    {
        printf("System is diagonally dominant.");
        for(i=0;i<n;i++)
        {
            a[i]=0;
        }
        t=0;
        while(t==0)
        {
            for(i=0;i<n;i++)
            {
                b[i]=a[i];
                sum=x[i][n];
                for(j=0;j<n;j++)
                {
                    if(i!=j)
                        sum=sum-x[i][j]*a[j];
                }
                a[i]=sum/x[i][i];
            }
            for(i=0;i<n;i++)
            {
                if(fabs(a[i]-b[i])>e)
                    {
                    t=0;
                    break;
                    }
                else
                    {
                        t=1;
                    }
            }
        }

    }
    printf("\nThe solutions are:\n");
    for(i=0;i<n;i++)
        {
            printf("%f ",a[i]);
        }
    return 0;
}

