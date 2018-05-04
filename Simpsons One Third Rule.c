#include<stdio.h>
#include<math.h>

float f(float x)
{
    return pow(x,3);

}

int main()
{
    int i;
    float a,b,h,x,y[100],s1,s2,sum;
    s1=0;
    s2=0;
    int n;
    printf("Enter the upper limit: ");
    scanf("%f",&b);
    printf("\nEnter the lower limit: ");
    scanf("%f",&a);
    printf("\nEnter the number of intervals: ");
    scanf("%d",&n);
    h=(b-a)/n;
    x=a;
    for(i=0;i<=n;i++)
    {
        y[i]=f(x);
        x=x+h;
    }
    for(i=1;i<=n-1;i+=2)
    {
        s1=s1+4*y[i];
    }
    for(i=2;i<=n-2;i+=2)
    {
        s2=s2+2*y[i];
    }
    sum=(h/3)*(y[0]+y[n]+s1+s2);
    printf("\nThe area is %f",sum);
    return 0;
}
