#include<stdio.h>
int main()
{
    int a[]={1,-3,4,2,-5,0,9,-6,3,0,6,1};
    int *p;
    p=a;
    printf("%d\n",*p++);
    printf("%d\n",*p);
    printf("%d\n",*p++);
    printf("%d\n",*p);
    printf("%d\t %d\t %d\n",*p++,*p++,*p++); // Assignment Operator Apply from Right to Left.
    printf("%d\t %d\t %d\t %d\n",*p++,*p,*p++,*p);
}