#include<stdio.h>

float f(float a,float b)
{
    return a+(2*b);
}
int main()
{
    float x,y,xn,h;
    printf("Enter the value of x,y,x(n) and h:\n");
    scanf("%f\n%f\n%f\n%f",&x,&y,&xn,&h);
    printf("\nx\t\tf(x,y)");
    printf("\n%f\t%f",x,y);
    while(x<xn)
    {
        y=y+h*f(x,y);
        x=x+h;
        printf("\n%f\t%f",x,y);
    }
    printf("\nThe required value of f(x,y) at x=xn is %f",y);
    return 0;
}
