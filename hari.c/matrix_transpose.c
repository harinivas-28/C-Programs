#include<stdio.h>
int main()
{
    int m1[20][20],a,b,i,j;
    printf("Enter row and column size of matrix: ");
    scanf("%d%d",&a,&b);
    printf("Enter Values to Matrix:\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        scanf("%d",&m1[i][j]);
    }
    printf("ORIGINAL Matrix:\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        printf("%d ",m1[i][j]);
        printf("\n");
    }
    printf("TRANSPOSE Matrix:\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        printf("%d ",m1[j][i]);
        printf("\n");
    }
}