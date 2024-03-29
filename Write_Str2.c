#include<stdio.h>
int main()
{
    FILE *fp;
    char str[50]="I'm Nidhi Nupur";
    fp=fopen("First.txt","w");
    fputs(str,fp);
    fclose(fp);
}