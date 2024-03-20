#include<stdio.h>
void main()
{
    FILE *fp=NULL;
    fp=fopen("Firs.txt","r+"); //It'll show error as the file doesn't exist.
    if(fp==NULL)
    {
        printf("Error");
        exit(1);
    }
    fclose(fp);
}