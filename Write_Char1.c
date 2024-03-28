#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp=NULL;
    char ch='4';
    fp=fopen("First.txt","w");
    if(fp==NULL)
    {
        printf("ERROR");
        exit(1);
    }
    fputc(ch,fp);
    fclose(fp);
}