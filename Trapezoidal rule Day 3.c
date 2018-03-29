#include<stdio.h>
#include<conio.h>
#include<math.h>
#define e 2.718

float f(float x)
{
    return pow(e,pow(x,3));

}

int main()
{
    float a,b,h,sum;
    int n;
    printf("Enter the upper limit: ");
    scanf("%f",&b);
    printf("\nEnter the lower limit: ");
    scanf("%f",&a);
    printf("\nEnter the number of intervals: ");
    scanf("%d",&n);
    h=(b-a)/n;
    printf("\n\tx\t\tf(x)");
    while(a<b)
    {
        sum=sum+(h/2)*(f(a)+f(a+h));
        printf("\n%f\t\t%f",a,f(a));
        a=a+h;
    }
    printf("\nThe area is %f",sum);
    return 0;
}
