#include<stdio.h>
struct xyz
{
    int a;
    float b;
    int c;
};
int main()
{
    struct xyz Q={.b=23,.c=754,.a=75}; // Designated initialization.
    printf("%d\t%f\t%d\n",Q.a,Q.b,Q.c);
}