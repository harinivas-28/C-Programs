#include<stdio.h>
int fact(int n);
int main()
{
    int n;
    printf("Enter an integer: ");
    scanf("%d",&n);
    printf("Factorial of %d is %d",n,fact(n));
}
int fact(int n)
{
    if(n==0)
    return 1;
    else
    return n*fact(n-1);
}