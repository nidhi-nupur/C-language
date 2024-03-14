#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    char c;
    fp=fopen("Firs.txt","a+"); // This mode will create a new file if it doesn't exists.
    if(fp==NULL)
    {
        printf("There is no such File..");
        exit(1);
    }
    while(!feof(fp)) // for reading a file
    {
        c=fgetc(fp);
        printf("%c",c);
    }
    fputs("Nupur",fp);
    rewind(fp); // to move the cursor at the starting.
    fclose(fp);
}