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
    return (sum);
    printf("Hii.."); // After return it'll not print anything.
    printf("You're ignoring me..? :(");
    printf("OKhey.. NP");
}

,,