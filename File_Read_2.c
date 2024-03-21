#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *fp=NULL;
    char c;
    fp=fopen("Firt.txt","r"); // As the given file doesn't exist, it'll show error.
    if(fp==NULL)
    {
        printf("Error");
        exit(1);
    }
    c=fgetc(fp);
    printf("%c",c);
    fclose(fp);
}