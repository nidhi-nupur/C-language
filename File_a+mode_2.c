#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    fp=fopen("Firs.txt","a+"); // This mode will create a new file if it doesn't exists.
    if(fp==NULL)
    {
        printf("There is no such File..");
        exit(1);
    }
    fputs("Nupur",fp);
    fclose(fp);
}