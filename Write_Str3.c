#include<stdio.h>
int main()
{
    FILE *fp;
    char str[50];
    fp=fopen("First.txt","w");
    fputs("Nidhi Nupur",fp);
    fclose(fp);
}