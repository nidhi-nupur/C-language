#include<stdio.h>
struct abc
{
    char a;
    int b;
    char c;
};
void main()
{
    struct abc S;
    int n;
    n=sizeof(S);
    printf("%d\n",n);
    printf("%d\n",sizeof(S));
    if(n=12)
    {
        printf("no. of padded bytes is 6");
    }
    else
    {
        printf("%d\n",sizeof(S));
    }
}