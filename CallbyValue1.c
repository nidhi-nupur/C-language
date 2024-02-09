#include<stdio.h>
void music(int,int);
void main()
{
    int x=2,y=3;
    music(x,y);
    printf("x=%d,y=%d",x,y);
}
void music(int x,int y)
{
    x=6;
    y=7;
    printf("x=%d,y=%d\n",x,y);
}