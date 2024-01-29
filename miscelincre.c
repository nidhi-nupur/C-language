#include<stdio.h>
int main()
{
    int a[]={2,3,4,5,6,7,8,1,8,6,9,0};
    int *p=a;
    printf("%d\n",*p);
    printf("%d\n",*++p);
    printf("%d\n",*p);
    printf("%d\n",*p++);
    printf("%d\t %d\t %d\n",*p++,*p,*++p);
    printf("%d\n",*p);
    printf("%d\t %d\t %d\t %d\n",*p,*++p,*++p,*p++);
}