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
    float x,y;
    printf("x=");
    scanf("%f",&x);
    printf("y=");
    scanf("%f",&y);
    sum(x,y);
}