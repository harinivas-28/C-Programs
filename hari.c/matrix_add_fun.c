/* Program to add two matrices using functions*/
/* Sample output:
    1)Enter the row and column sizes of two matrices: 2 2 2 2
    Enter the elements into the matrix:1 2 3 4
    Enter the elements into the matrix:1 2 3 4
    2 4 
    6 8
    2)Enter the row and column sizes of two matrices: 2 2 3 3
    Addition is not possible.
*/
#include<stdio.h>
int a,b,c,d;//Important to declare them as global
void matrixadd(int m1[50][50],int m2[50][50],int m3[50][50])
{
    int i,j;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        m3[i][j]=m1[i][j]+m2[i][j];
    }
    return;
}
int main()
{
    int i,j;
    printf("Enter the row and column sizes of two matrices: ");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int m1[50][50],m2[50][50],m3[50][50];
    if(a==c && b==d)
    {
    printf("Enter the elements into the matrix:");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        scanf("%d",&m1[i][j]);
    }
    printf("Enter the elements into the matrix:");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        scanf("%d",&m2[i][j]);
    }
    matrixadd(m1,m2,m3);
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        printf("%d ",m3[i][j]);
        printf("\n");
    }
    }
    else
    printf("Addition is not possible.");
}