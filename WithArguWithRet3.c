#include<stdio.h>
float sum(float,int);
void main()
{
    int x,y;
    float c;
    printf("x=");
    scanf("%d",&x);
    printf("y=");
    scanf("%d",&y);
    c=sum(x,y);
    printf("Sum=%f\n",c);
}
float sum(float a,int b)
{
    float Sum=0;
    Sum=a+b;
    return Sum; 
}