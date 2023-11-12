#include<stdio.h>
int main()
{
    struct student{
        char name[20];
        int age;
        struct dob{
            int date;
            int month,year;
        };
    }s1,s2;
    struct dob d1,d2;
    printf("Enter Student name and age: ");
    scanf("%s%d",&s1.name,&s1.age);
    printf("Enter Date of Birth: ");
    scanf("%d%d%d",&d1.date,&d1.month,&d1.year);
    printf("Enter Student name and age: ");
    scanf("%s%d",&s2.name,&s2.age);
    printf("Enter Date of Birth: ");
    scanf("%d%d%d",&d2.date,&d2.month,&d2.year);
    printf("Students Details are: ");
    printf("\n1.%s\n%d\n%d-%d-%d",s1.name,s1.age,d1.date,d1.month,d1.year);
    printf("\n2.%s\n%d\n%d-%d-%d",s2.name,s2.age,d2.date,d2.month,d2.year);
}