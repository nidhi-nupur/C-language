#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    char c;
    fp=fopen("First.txt","r");
    if(fp==NULL)
    {
        printf("File doesn't exist.");
        exit(1);
    }
    fseek(fp,5,SEEK_SET);
    c=fgetc(fp);
    printf("%c\n",c);
    fseek(fp,-2,SEEK_CUR);
    c=fgetc(fp);
    printf("%c\n",c);
    fseek(fp,-6,SEEK_END);
    c=fgetc(fp);
    printf("%c\n",c);
}