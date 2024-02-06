#include<stdio.h>
void main()
{
    int a=6;
    int *p=0;
    int *q=0;
    if(p==q)
    {
        printf("Both the pointers are NULL Pointer.");
    }
    else
    {
        printf("%d\n",q);
    }
}