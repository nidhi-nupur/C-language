#include<stdio.h>
void main()
{
    void *vp;
    int a=10;
    float b=2.37;
    char c='n';
    vp=&a;
    printf("a=%d\n",*(int*)vp); //we have to typecast vp to int datatype, to get value of a.
    vp=&b;
    printf("b=%f\n",*(float*)vp); //we have to typecast vp to float datatype, to get value of b.
    vp=&c;
    printf("c=%c\n",*(char*)vp); //we have to typecast vp to char datatype, to get value of c.
}