/* Selection sort
input=
5                                                                                                                       
32                                                                                                                      
34                                                                                                                      
12                                                                                                                      
6                                                                                                                       
26 
output=
Sorted Array:                                                                                                           
6                                                                                                                       
12                                                                                                                      
26                                                                                                                      
32                                                                                                                      
34   */
#include<stdio.h>
int main()
{
    int list[20],a,i,j,pos,temp;
    printf("Enter the length of list: ");
    scanf("%d",&a);
    printf("Enter Values to the list: ");
    for(i=0;i<a;i++)
    scanf("%d",&list[i]);
    printf("List before Swapping: ");
    for(i=0;i<a;i++)
    printf("%d ",list[i]);
    for(i=0;i<a-1;i++)
    {
        pos=i;
        for(j=i+1;j<a;j++)
        {
            if(list[j]<list[pos])
            pos=j;
        }
        if(pos!=i)
        {
            temp=list[i];
            list[i]=list[pos];
            list[pos]=temp;
        }
    }  
    printf("\nList after Sorting: ");
    for(i=0;i<a;i++)
    printf("%d ",list[i]); 
}