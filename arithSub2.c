#include<stdio.h>
int main()
{
    int e;
    int a[]={1,6,0,-3,-2,6,-4,2,-7};
    int *p=&a[0];
    int *q=&a[4];
    printf("value=%d\n",*p);
    printf("value=%d\n",*q);
    e=p-q;
    printf("value=%d\n",e);
    *q=46;
    e=p-q;
    printf("value=%d\n",e);
    q=q+3;
    printf("value=%d\n",*q);
    // p=p-q;
    // printf("value=%d\n",*p);
    // *p=34;
    p=p-q;
    printf("value=%d\n",*p);
    printf("value=%d\n",*q);
}