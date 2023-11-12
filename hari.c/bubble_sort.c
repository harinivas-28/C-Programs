/* Implement bubble sort algorithm 
Input Format
5                                                                                                                       

34                                                                                                                      
56                                                                                                                      
76                                                                                                                      
2                                                                                                                       
23                                                                                                                      
output Format:
Array after sorting: 2 23 34 56 76   */
#include<stdio.h>
int main()
{
    int list[20],a,i,j,temp;
    printf("Enter the length of the list: ");
    scanf("%d",&a);
    printf("Enter values to the list: ");
    for(i=0;i<a;i++)
    scanf("%d",&list[i]);
    printf("List before Sorting: ");
    for(i=0;i<a;i++)
    printf("%d ",list[i]);
    for(i=0;i<a-1;i++)
    {
        for(j=0;j<a-i-1;j++)
        {
            if(list[j]>list[j+1])
            {
                temp=list[j];
                list[j]=list[j+1];
                list[j+1]=temp;
            }
        }
    }
    printf("\nList after Sorting: ");
    for(i=0;i<a;i++)
    printf("%d ",list[i]);
}