#include<stdio.h>
struct abc
{
    char a;
    int b;
};
void main()
{
    struct abc S;
    int n;
    n=sizeof(S);
    printf("%d\n",n);
    printf("%d\n",sizeof(S));
    if(n=8)
    {
        printf("no. of padded bytes is 3");
    }
    else
    {
        printf("%d\n",sizeof(S));
    }
}