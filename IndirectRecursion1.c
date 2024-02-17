#include<stdio.h>
int f1(int);
int f2(int);
void main()
{
    printf("%d\n",f1(5));
}
int f1(int n)
{
    if(n<=1)
    return 1;
    else 
    return n*f2(n-1);
}
int f2(int n)
{
    if(n<=1)
    return 1;
    else
    return n*f1(n-1);
}