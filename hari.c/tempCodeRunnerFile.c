
    FILE *f;
    f=fopen("file.txt","r");
    char string[100];
    fgets(string,100,f);
    fputs(string,f);
    fclose(f);
}