#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    char c;
    fp=fopen("First.txt","r+");
    if(fp==NULL)
    {
        printf("There is no such file.");
        exit(1);
    }
    fseek(fp,8,SEEK_SET);
    while(!feof(fp))
    {
        c=fgetc(fp);
        printf("%c",c);
    }
    rewind(fp);
    printf("\n");
    while(!feof(fp))
    {
        c=fgetc(fp);
        printf("%c",c);
    }
    fclose(fp);
}