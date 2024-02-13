#include<stdio.h>
int sum(int,int);
void main()
{
    int x,y,c;
    printf("x=");
    scanf("%d",&x);
    printf("y=");
    scanf("%d",&y);
    c=sum(x,y);
    printf("Sum=%d\n",c);
}
int sum(int a,int b)
{
    return a+b;
}