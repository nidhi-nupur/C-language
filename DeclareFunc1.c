#include<stdio.h>

void sum();  // Function Declaration.


void main()
{
    sum(); // Function Calling.
    printf("Nidhi Nupur..");
    sum();
}


void sum()  // Function Definition.
{
    int a,b;
    printf("\nEnter any two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Add=%d\n",a+b);
}