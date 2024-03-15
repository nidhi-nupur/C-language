#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    char str[500];
    fp=fopen("First.txt","a");
    if(fp==NULL)
    {
        printf("Error");
        exit(1);
    }
    printf("Enter the content you want to append:");
    gets(str);
    fprintf(fp,"\n%s",str);
    printf("Successfully appended");
    fclose(fp);
}