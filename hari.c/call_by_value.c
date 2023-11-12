#include<stdio.h>
int swap(int x,int y);
int main()
{
    int a,b;
    printf("Enter two integers: ");
    scanf("%d%d",&a,&b);
    printf("Values before Swapping: ");
    printf("%d %d",a,b);
    printf("\nValues after swapping: ");
    swap(a,b);
}
int swap(int x,int y)
{
    int temp=x;
    x=y;
    y=temp;
    printf("%d %d",x,y);
}