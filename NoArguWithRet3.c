#include<stdio.h>
int sum(void);
void main()
{
    int S;
    S=sum();
    printf("Sum=%d\n",S);
}
int sum()
{
    int a,b;
    int sum;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    sum=a+b;
    return (sum),a; // By comma operator here only value of 'a' will return.
}