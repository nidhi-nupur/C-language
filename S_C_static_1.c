#include<stdio.h>
void display();
void main()
{
    display();
    display();
}
void display()
{
    static int s;
    s=s+10;
    printf("s=%d\n",s);
}