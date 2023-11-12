/* Write a c program to check whether a given number is palindrome or not 
Input Format 
153                                                                                                   
Output Format
153 is not a palindrome.*/
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    int a=n;
    while(a>0)
    {
        i=a%10;
        sum=sum*10+i;
        a/=10;
    }
    if(n==sum)
    printf("%d is a palindrome.",n);
    else
    printf("%d is not a palindrome.",n);
}