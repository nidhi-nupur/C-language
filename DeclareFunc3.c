#include<stdio.h>

void sum();


void main()
{
    sum(3,5); // It'll not show any error.
}


void sum()
{
    int a,b;
    printf("\nEnter any two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Add=%d\n",a+b);
}