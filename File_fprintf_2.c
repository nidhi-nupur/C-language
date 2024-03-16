#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    FILE *fp=NULL;
    int a;
    char str[50];
    fp=fopen("First.txt","w");
    printf("Enter the string:");
    gets(str);
    printf("Enter the value of a:");
    scanf("%d",&a);
    fprintf(fp,"%d\n%s",a,str);
    fclose(fp);
}