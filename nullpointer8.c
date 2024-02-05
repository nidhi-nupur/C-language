#include<stdio.h>
void main()
{
    int a=6;
    int *p=NULL;
    int *q=NULL;
    if(p==q)
    {
        printf("Both the pointers are NULL Pointer.");
    }
    else
    {
        printf("%d\n",*p);
    }
}