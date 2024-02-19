#include<stdio.h>
int fun(int a)
{
    if (a<1) return;
    else 
    return (1 + fun(a/2));
}
void main()
{
    int a;
    a= fun(10);
    printf("%d\n",a);
}