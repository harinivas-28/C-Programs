#include<stdio.h>
int main()
{
    FILE *f,*fp;
    f=fopen("file.txt","r");
    int ch = getc(f);
    while(ch!=EOF)
    {
        putchar(ch);
        ch = getc(f);
    }
    printf("\n");
    fclose(f);
    fp=fopen("file.txt","a");
    char n;
    printf("Enter text: ");
    while((n=getchar())!=EOF)
    putc(n,fp);
    fclose(fp);
    fp=fopen("file.txt","r");
    while((n=getc(fp))!=EOF)
    putchar(n);
    fclose(fp);
}