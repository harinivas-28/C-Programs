/*Program to print pascal triangle*/
/* Sample output:
    enter the number:6
          1
         1 1
        1 2 1
       1 3 3 1
      1 4 6 4 1
     1 5 10 10 5 1
*/
#include<stdio.h>
int main()
{
    int rows,coef=1,space,i,j;
    printf("enter the number:");
    scanf("%d",&rows);
    for(i=0;i<rows;i++)
    {
        for(space=1;space<=rows-i;space++)
        printf(" ");
        for(j=0;j<=i;j++)
        {
            if(j==0 || i==0)
            coef=1;
            else
            coef=(coef*(i-j+1))/j;
            printf("%2d ",coef);
        }
        printf("\n");
    }
    return 0;
}