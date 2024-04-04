#include<stdio.h>
#include "S_C_Extern_2.c"
void fun()
{
    extern int a;
    a++;
    printf("Hello from practice.c");
    printf("a=%d\n",a);
}