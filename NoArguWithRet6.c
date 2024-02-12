#include<stdio.h>
float sum(void);
void main()
{
    float S;
    S=sum();
    printf("Sum=%f\n",S);
}
float sum()
{
    int a,b;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    return a+b;
}