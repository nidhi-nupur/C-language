#include<stdio.h>
void display();
void main()
{
    int i;
    for(i=0;i<3;i++)
    display();
}
void display()
{
    static int a=7;
    int b=7;
    a++;
    b++;
    printf("a=%d\n",a);
    printf("b=%d\n",b);
}