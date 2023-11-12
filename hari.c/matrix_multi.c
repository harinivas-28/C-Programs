/*Write a C program to multiply two matrices.
Array size and element must be given from key board dynamically*/
#include<stdio.h>
int main()
{
    int arr[50][50],arr1[50][50],arr2[50][50],i,j,a,b,c,d,k;
    scanf("%d%d",&a,&b);
    scanf("%d%d",&c,&d);
    if(b==c)
    {
        for(i=0;i<=a-1;i++)
        {
            for(j=0;j<=b-1;j++)
            scanf("%d",&arr1[i][j]);
        }
        for(i=0;i<=c-1;i++)
        {
            for(j=0;j<=d-1;j++)
            scanf("%d",&arr2[i][j]);
        }
        for(i=0;i<=a-1;i++)
        {
            for(j=0;j<=d-1;j++)
            {
            arr[i][j]=0;
               for(k=0;k<=b-1;k++)
            {
            arr[i][j]+=arr1[i][k]*arr2[k][j];//arr=arr+(arr1*arr2)
            }
            printf("%d",arr[i][j]);
          }
        }
    }
}