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
    union abc *P=&U;
    U.a=1;
    U.b=64;
    U.c=78.5;
    printf("a=%d\n",P->a); // This will show garbage value.
    printf("b=%c\n",P->b); // This will show garbage value.
    printf("c=%f\n",P->c);
}