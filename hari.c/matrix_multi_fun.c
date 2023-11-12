/* Program to perform matrix multiplication using functions*/
/* Sample output:
    1)Enter the row and column size of two matrices: 2 2 2 2
    Enter the elements into matrix:1 2 3 4
    Enter the elements into matrix:1 2 3 4
    7   10
    15  22
    2)Enter the row and column size of two matrices: 2 3 2 3
    Multiplication is not possible.
*/
#include<stdio.h>
int a,b,c,d;
void matrixmulti(int m1[50][50],int m2[50][50],int m3[50][50])
{
    int i,j,k;
    for(i=0;i<a;i++)
    {
        for(j=0;j<d;j++)
        {
            for(k=0;k<b;k++)
            m3[i][j]+=m1[i][k]*m2[k][j];
        }
    }
    return;
}
int main()
{
    int i,j;
    printf("Enter the row and column size of two matrices: ");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int m1[50][50],m2[50][50],m3[50][50];
    if(b==c)
    {
    printf("Enter the elements into matrix:");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        scanf("%d",&m1[i][j]);
    }
    printf("Enter the elements into matrix:");
    for(i=0;i<c;i++)
    {
        for(j=0;j<d;j++)
        scanf("%d",&m2[i][j]);
    }
    matrixmulti(m1,m2,m3);
    for(i=0;i<a;i++)
    {
        for(j=0;j<d;j++)
        printf("%d ",m3[i][j]);
        printf("\n");
    }
    }
    else printf("Multiplication is not possible.");
}