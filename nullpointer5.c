#include<stdio.h>
void main()
{
    int a=6;
    int *p=NULL;
    if(p==NULL)
    {
        printf("This is a NULL Pointer.");
    }
    else
    {
        printf("%d\n",*p);
    }
}