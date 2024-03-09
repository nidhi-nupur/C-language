#include<stdio.h>
struct demo
{
    int a;
    char b;
    float c;
};
void main()
{
    struct demo S={1,'a',29.7};
    printf("%d\t%c\t%f\n",S.a,S.b,S.c);
}