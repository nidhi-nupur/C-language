#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    FILE *fp=NULL;
    char str[50];
    fp=fopen("First.txt","r");
    if(fp==NULL)
    {
        printf("Error");
        exit(1);
    }
    fgets(str,5,fp);
    printf("%s",str);
    fclose(fp);
}