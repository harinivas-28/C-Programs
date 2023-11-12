#include<stdio.h>
int main()
{
    FILE *fp1,*fp2;
    char ch;
    fp1=fopen("abc.txt","w");
    printf("Enter Text into File 1 and click ctrl+z then Enter: ");
    while((ch=getchar())!=EOF)
    {
        putc(ch,fp1);
    }
    fclose(fp1);
    fp1=fopen("abc.txt","r");
    fp2=fopen("xyz.txt","w");
    while((ch=getc(fp1))!=EOF)
    {
        putc(ch,fp2);
    }
    fclose(fp1);
    fclose(fp2);
    //TO PRINT THE COPIED CONTENT IN FILE 2
    fp2=fopen("xyz.txt","r");
    printf("\nFile 2 contents are: ");
    while((ch=getc(fp2))!=EOF)
    {
        putchar(ch);
    }
    fclose(fp2);
}