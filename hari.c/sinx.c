#include<stdio.h>
#include<math.h>
int factorial(int b);
int main()
{
    int m,i,b=1;
    float n,pi,x,sum;
    pi=3.141592;
    scanf("%f",&n);//Angle
    scanf("%d",&m);//range
    x=(n*pi)/180;
    for(i=1;i<=m;i++)
    {
        sum+= -1*pow(-1,i)*(pow(x,b)/factorial(b));
        b+=2;
    }
    printf("Sin %.2f = %f",n,sum);
}
int factorial(int b)
    {
        int k=1,fact=1;
        while(k<=b)
        {
        fact*=k;
        k+=1;
        }
        return fact;
    }
