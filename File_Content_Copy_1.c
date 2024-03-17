#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp1=NULL, *fp2=NULL;
    char c;
    fp1=fopen("First.txt","r");
    if(fp1==NULL)
    {
        printf("There's no such file.");
        exit(1);
    }
    fp2=fopen("Firs.txt","w");
    if(fp2==NULL)
    {
        printf("There's no such file.");
        exit(1);
    }
    while((c=fgetc(fp1))!=EOF)
    {
        fputc(c,fp2);
    }
    printf("Successfully Copied");
    fclose(fp1);
    fclose(fp2);
}