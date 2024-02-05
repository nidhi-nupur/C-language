#include<stdio.h>
void main()
{
    int a=6;
    int *p;
    int *q;
    if(p==q)
    {
        printf("Both the pointers are Uninitialize.");
    }
    else
    {
        printf("%d\n",*p);
    }
}

//This won't run.