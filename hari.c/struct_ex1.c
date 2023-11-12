#include<stdio.h>
struct employee
{
    char name[20];
    float salary;
    int age;
};
int main()
{
    int x;
    struct employee e[4];
    printf("Enter name,salary,age:");
    for(x=0;x<3;x++)
    scanf("%s%f%d",&e[x].name,&e[x].salary,&e[x].age);
    if(e[0].salary>e[0+1].salary && e[0].salary>e[0+2].salary)
    printf("%s has more salary.",e[0].name);
    else if(e[0+1].salary>e[0].salary && e[0+1].salary>e[0+2].salary)
    printf("%s has more salary.",e[0+1].name);
    else
    printf("%s has more salary.",e[0+2].name);
}