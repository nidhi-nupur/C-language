#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    char str[50];
    char c;
    fp=fopen("First.txt","w+");
    if(fp==NULL)
    {
        printf("File can't be open.");
        exit(1);
    }
    fputs("Nupur",fp);

    /*while(!feof(fp)) 
    // We can not read the file in w+ mode as the previous content will be erased.
    {
        c=fgetc(fp);
        printf("%c",c);
    }*/ // By doing this terminal will show infinite loop.
    fclose(fp);
}