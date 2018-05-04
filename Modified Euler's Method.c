#include<stdio.h>
#include<math.h>

float f(float a,float b)
{
    return a+(2*b);
}
int main()
{
    float x1,x0,y0,y2,y1,ya,xn,h;
    printf("Enter the value of x0,y0,x(n) and h:\n");
    scanf("%f\n%f\n%f\n%f",&x0,&y0,&xn,&h);
    while(x0<xn)
    {
        y1=y0+h*f(x0,y0);
        x1=x0+h;
        do
        {
            y2=y0+(h/2)*(f(x0,y0)+f(x1,y1));
            ya=y1;
            y1=y2;
        }while(fabs(y2-ya)<0.00001);
        x0=x1;
        y0=y2;
    }
    printf("\nThe required value of f(x,y) at x=xn is %f",y0);
    return 0;
}
