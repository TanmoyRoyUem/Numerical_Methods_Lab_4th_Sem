#include<stdio.h>
#include<math.h>

float f(float a,float b)
{
    return ((-2)*a*b*b);
}
int main()
{
    float x,y,k1,k2,k3,k4,xn,h;
    printf("Enter the value of x,y,x(n) and h:\n");
    scanf("%f\n%f\n%f\n%f",&x,&y,&xn,&h);
    printf("\nx\t\tf(x,y)");
    printf("\n%f\t%f",x,y);
    while(x<xn)
    {
        k1=h*f(x,y);
        k2=h*f(x+h/2,y+k1/2);
        k3=h*f(x+h/2,y+k2/2);
        k4=h*f(x+h,y+k3);
        y=y+(k1+k4+2*(k2+k3))/6;
        x=x+h;
        printf("\n%f\t%f",x,y);
    }
    printf("\nThe required value of f(x,y) at x=xn is %f",y);
    return 0;
}
