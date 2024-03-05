#include<stdio.h>
#pragma pack(1)
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
    if(n!=8)
    {
        printf("There's no padding bytes..");
    }
    else
    {
        printf("%d\n",sizeof(S));
    }
}