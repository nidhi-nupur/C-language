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
    sum(3.6,1.4); // Giving static values.
    // Output will show as 'Sum of Static values..'
}