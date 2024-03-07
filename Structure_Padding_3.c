#include<stdio.h>
#pragma pack(1)
struct abc
{
    char a;   // Structure without using any Directives.
    char c;   // By arranging these in decreasing size of datatypes..
    int b;
};
void main()
{
    struct abc S;
    printf("%d\n",sizeof(S));
}