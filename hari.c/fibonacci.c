#include<stdio.h>
int main()
{
    int n,a,b=1,i=0;
    printf("Enter range: ");
    scanf("%d",&n);
    printf("Fibonacci Series:\n");
    while(i<n)
    {
        printf("%d ",a);
        int c=a+b;
        a=b;
        b=c;
        c=a;
        i++;
    }
}