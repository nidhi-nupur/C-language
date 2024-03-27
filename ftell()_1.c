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
    position=ftell(fp);
    printf("%d",position);
    fclose(fp);
}