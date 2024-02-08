#include<stdio.h>
void main()
{
    int *p=NULL;
    {
        int a=8;
        p=&a;
        printf("a=%d\n",*p);
    }
    printf("%d\n",*p);
}