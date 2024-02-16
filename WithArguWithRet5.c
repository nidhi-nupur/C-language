#include<stdio.h>
int sum(int,int);
void main()
{
    int x,y,c;
    printf("x=");
    scanf("%d",&x);
    printf("y=");
    scanf("%d",&y);
    c=sum(5,7);
    printf("Sum=%d\n",c);
}
int sum(int a,int b)
{
    int Sum=0;
    Sum=a+b;
    return Sum; 
}