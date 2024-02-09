#include<stdio.h>
void music(int*,int*);
void main()
{
    int x=8,y=9;
    music(&x,&y);
    printf("Inside main(Calling Function)\n");
    printf("x=%d,y=%d\n",x,y);
}
void music(int*x,int*y)
{
    printf("x=%d,y=%d\n",x,y);
    *x=2;
    *y=3;
    printf("Inside music(Called Function)\n");
    printf("x=%d,y=%d\n",*x,*y);
}