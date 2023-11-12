/*Write a C Program to print prime numbers from 1 to n
Input
12   
Output
The prime numbers in between the range 1 to 12:2 3 5 7 11*/
#include<stdio.h>
int main()
{
    int n,i,j,a;
    printf("Enter range: ");
    scanf("%d",&n);
    printf("The prime numbers in between the range 1 to %d:",n);
    for(i=2;i<=n;i++)
    {
        a=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            a=1;
        }
        if(a==0)
        printf("%d ",i);
    }
    
}