#include<stdio.h>
void sum(float,float);
void sum(float x,float y)
{
    float s=0;
    s=x+y;
    printf("Sum=%f\n",s);
}
void main()
{
    sum(2.5,6.3);
}