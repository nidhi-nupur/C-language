// Program to print Sum of N natural numbers.
#include<stdio.h>
int sum(int x)
{
    int s=0;
    if (x==1)
    return x;
    s=x+sum(x-1);
    return s;
}
void main()
{
    int a,x;
    printf("x=");
    scanf("%d",&x);
    a=sum(x);
    printf("Sum of first %d natural number=%d\n",x,a);
}