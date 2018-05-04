#include<stdio.h>
#include<math.h>

float f(float x)
{
    return (cos(x)-2*x);
}

float df(float x)
{
    return (-sin(x)-2);
}

int main()
{
    float b,x1,x0,e;
    printf("Enter the desired accuracy: ");
    scanf("%f",&e);
    printf("\nEnter the initial value of x: ");
    scanf("%f",&x0);
    do
    {
        b=x0;
        x1=x0-(f(x0)/df(x0));
        x0=x1;
        printf("\n%f",x1);
    }
    while(fabs(b-x0)>e);
    printf("\nThe root is %f",x1);
    return 0;
}
