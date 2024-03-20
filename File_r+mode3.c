#include<stdio.h>
void main()
{
    FILE *fp=NULL;
    fp=fopen("First.txt","r+"); 
    if(fp==NULL)
    {
        printf("Error");
        exit(1);
    }
    fputs("This is Nidhi Nupur",fp);
    fputc(' ',fp);
    fclose(fp);
}