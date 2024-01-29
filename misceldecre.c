#include<stdio.h>
int main()
{
    int a[]={5,-4,-1,2,-2,-4,4,-6,0,-3};
    int *p=&a[0];
    int *q=&a[7];
    printf("%d\n",*p);
    printf("%d\n",*q);
    printf("%d\t %d\n",*++q,*++p);
    printf("%d\t %d\n",*--q,*p--);
    printf("%d\t %d\t %d\t %d\n",*--q,*p-- + *--q,*++p);
    printf("%d\n",*p);
    printf("%d\n",*q);
}