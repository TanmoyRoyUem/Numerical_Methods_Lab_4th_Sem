#include<stdio.h>
#include<conio.h>
#include<math.h>

float f(float n)
{
    return ((n*n*n)-(4*n)-1);
}
int main()
{
    float a,b,e,x;
    printf("Enter the desired accuracy: ");
    scanf("%f",&e);
    do
    {
    printf("\nEnter value of interval a: ");
    scanf("%f",&a);
    printf("\nEnter value of interval b: ");
    scanf("%f",&b);
    }while(f(a)*f(b)>0);

    printf("\nThe value of x is:");
    while(fabs(b-a)>e)
    {
        x=(b+a)/2;
        printf("\n%f",x);
        if(f(a)*f(x)<0)
            b=x;
        else
        a=x;
    }
    printf("\nThe root is %f",x);
    return 0;
}
