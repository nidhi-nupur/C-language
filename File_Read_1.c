#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *fp=NULL;
    char c;
    fp=fopen("First.txt","r");
    if(fp==NULL)
    {
        printf("Error");
        exit(1);
    }
    c=fgetc(fp);
    printf("%c",c);
    fclose(fp);
}