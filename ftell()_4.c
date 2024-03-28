#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    char c;
    int position;
    char s[50];
    fp=fopen("First.txt","r");
    if(fp==NULL)
    {
        printf("File doesn't exist.");
        exit(1);
    }
    fseek(fp,7,SEEK_SET);
    printf("%d\n",ftell(fp));
    c=fgetc(fp);
    printf("%c\n",c);
    printf("%d\n",ftell(fp));
    fscanf(fp,"%s",s);
    printf("%s\n",s);
    printf("%d\n",ftell(fp));
    fseek(fp,0,SEEK_END);
    printf("%d",ftell(fp));
    fclose(fp);
}