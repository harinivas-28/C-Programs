#include<stdio.h>
struct car{
    char brand[20];
    char model[20];
    int year[20];
}c1,c2,c3;
int main()
{
    scanf("%s%s%d",&c1.brand,&c1.model,&c1.year);
    scanf("%s%s%d",&c2.brand,&c2.model,&c2.year);
    scanf("%s%s%d",&c3.brand,&c3.model,&c3.year);
    printf("%s\n%s\n%d\n",c1.brand,c1.model,c1.year);
    printf("%s\n%s\n%d\n",c2.brand,c2.model,c2.year);
    printf("%s\n%s\n%d\n",c3.brand,c3.model,c3.year);
}