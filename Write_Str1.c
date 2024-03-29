#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *fp=NULL;
    char ch[60];
    fp=fopen("First.txt","w");
    if(fp==NULL)
    {
        printf("ERROR");
        exit(1);
    }
    printf("Enter the String:");
    gets(ch);
    // for(int i=0;i!=strlen(ch);i++)
    // fputc(ch[i],fp);
    fputs(ch,fp);
    fclose(fp);
}