#include<stdio.h>
int main()
{
    int m1[20][20],m2[20][20],m3[20][20];
    int a,b,c,d,i,j;
    printf("MATRIX 1\n");
    printf("Enter number of rows: ");scanf("%d",&a);
    printf("\nEnter number of columns: ");scanf("%d",&b);
    printf("MATRIX 2\n");
    printf("Enter number of rows: ");scanf("%d",&c);
    printf("\nEnter number of columns: ");scanf("%d",&d);
    printf("\nEnter values to matrix 1:\n");
    if(a==c&&b==d)
    {
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            scanf("%d",&m1[i][j]);
        }
        printf("\nEnter values to matrix 2:\n");
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            scanf("%d",&m2[i][j]);
        }
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            m3[i][j]=m1[i][j]+m2[i][j];
        }
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            printf("%d ",m3[i][j]);
            printf("\n");
        }
    }
    else
    printf("The Matrices cannot be Added.");
}