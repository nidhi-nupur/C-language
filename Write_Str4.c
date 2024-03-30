#include<stdio.h>
int main()
{
    FILE *fp;
    char str[50]="Nidhi Nupur";
    fp=fopen("First.txt","w");
    for(int i=0;i!=strlen(str);i++)
    fputc(str[i],fp);
    fclose(fp);
}