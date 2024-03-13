#include<stdio.h>
void fun(int a)
{
    if (a<1) return;
    else printf("%d\n",a);
    fun(a/2);
}
void main()
{
    fun(10);
}