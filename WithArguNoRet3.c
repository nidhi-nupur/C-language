#include<stdio.h>
void sum(float,int);
void sum(float x,int y)
{
    float s=0;
    s=x+y;
    printf("Sum=%f\n",s);
}
void main()
{
    float a,b;
    printf("a=");
    scanf("%f",&a);
    printf("b=");
    scanf("%f",&b);
    sum(a,b);
}