#include<stdio.h>
#include<stdlib.h>
int main() 
{
    FILE *ptrName;
    char a;
    ptrName = fopen("abs.txt","r");
    //ptrName = fopen("abs.txt","w");
    if(ptrName == NULL) 
    {
        printf("There is no file and data in file.");
    }
    else
    {
        printf("There is file.");
       // fprintf(ptrName,"It's me hii!!");
        a = fscanf(ptrName,"%s");
        printf("%s",a);
    }
    fclose(ptrName);
    return 0;
}