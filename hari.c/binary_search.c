#include<stdio.h>
int main()
{
    int list[30],a,i,low,mid,high,key;
    printf("Enter the length of list: ");
    scanf("%d",&a);
    printf("Enter Values to list: ");
    for(i=0;i<a;i++)
    scanf("%d",&list[i]);
    low=0;high=a-1;
    printf("Enter Key to find: ");
    scanf("%d",&key);
    for(i=0;i<a;i++)
    {
        mid=(low+high)/2;
        if(key<list[mid])
        high=mid-1;
        else if(key>list[mid])
        low=mid+1;
        else 
        {
        printf("%d found at index %d",key,mid);
        break;
        }
    }
}