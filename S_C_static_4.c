#include<stdio.h>
static int a;
void display();
void main()
{
    display();
    display();
    printf("a=%d\n",a);
}
void display()
{
    int r=98;
    static int s;
    s=s+10;
    r--;
    printf("s=%d\n",s);
    printf("r=%d\n",r);
}