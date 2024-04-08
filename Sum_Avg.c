#include<stdio.h>
int main()
{
    int a,b,c,sum,avg;
    printf("enter the three values:\n");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    printf("summation of three no=%d",sum);
    avg=sum/3;
    printf("Average of three no=%d",avg);
}