#include<stdio.h>
void sum(float,float); 
void sum(float x,float y)
{
    printf("Sum=%f\n",x+y);
}
void main()
{
    float x,y;
    printf("x=");
    scanf("%f",&x);
    printf("y=");
    scanf("%f",&y);
    sum(x,y,3,5); // This will show error as "too many arguments."
}