#include<stdio.h>
void display();
void main()
{
    display();
    display();
    printf("s=%d\n",s); // it'll show error because s is not defined for this block.
}
void display()
{
    static int s;
    s=s+10;
    printf("s=%d\n",s);
}