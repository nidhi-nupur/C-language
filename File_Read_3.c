#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *fp=NULL;
    char c;
    fp=fopen("First.txt","r");
    if(fp==NULL)
    {
        printf("Error");
        exit(1);
    }
    while(!feof(fp)) // !feof() means End of file.
    {
        c=fgetc(fp);
        printf("%c",c); // read the entire file character by character.
    }
    fclose(fp);
}