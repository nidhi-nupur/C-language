#include<stdio.h>
union abc
{
    int a;
    char b;
    float c;
};
void main()
{
    union abc U;
    U.a=1;
    U.b=64;
    U.c=78.5;
    printf("a=%d\n",U.a); // This will show garbage value.
    printf("b=%c\n",U.b); // This will show garbage value.
    printf("c=%f\n",U.c);
}