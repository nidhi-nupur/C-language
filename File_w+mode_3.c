#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    FILE *fp=NULL;
    char str[30];
    fp=fopen("First.txt","r+");
    if(fp==NULL)
    {
        printf("File can't be open.");
        exit(1);
    }
    while(!feof(fp))
    {
        fgets(str,8,fp);
        printf("%s",str);
    }
    fputs("Nidhi",fp);
    fclose(fp);
}