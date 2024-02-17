#include<stdio.h>
void output(int n)
{
    if (n<1) 
    return;
    else
    {
        printf("After function call, n=%d\n",n);
        output(n-1);
        printf("After return n=%d\n",n);
    }
}
void main()
{
    int n=3;
    output(n);
}