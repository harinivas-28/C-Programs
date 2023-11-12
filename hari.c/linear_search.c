#include<stdio.h>
int main()
{
    int list[50],i,a,key;
    printf("Enter the length of list: ");scanf("%d",&a);
    for(i=0;i<a;i++)
    scanf("%d",&list[i]);
    printf("Enter Key to Find: ");scanf("%d",&key);
    for(i=0;i<a;i++)
    {
        if(list[i]==key)
        {
        printf("%d found at index %d",key,i);
        break;
    }}
}