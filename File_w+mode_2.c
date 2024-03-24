#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    char str[50];
    char c;
    fp=fopen("First.txt","w+");
    if(fp==NULL)
    {
        printf("File can't be open.");
        exit(1);
    }
    fputs("Nupur",fp);
    rewind(fp); // It move the cursor at the start.
    while(!feof(fp)) 
    {
        c=fgetc(fp);
        printf("%c",c);
    }
    fclose(fp);
}