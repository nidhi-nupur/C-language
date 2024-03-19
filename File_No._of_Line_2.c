#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    int No_of_Line=1;
    char c;
    fp=fopen("First.txt","r");
    if(fp==NULL)
    {
        printf("File doesn't exist.");
        exit(1);
    }
    for(c=fgetc(fp);c!=EOF;c=fgetc(fp))
    {
        if(c=='\n')
        {
            No_of_Line=No_of_Line+1;
        }
    }
    fclose(fp);
    printf("Number of lines=%d\n",No_of_Line);
}