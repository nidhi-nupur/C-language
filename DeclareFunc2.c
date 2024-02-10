#include<stdio.h>

void sum(); 


void main()
{
    sum();
    printf("Nidhi Nupur..");
    sum();
}

void sum()
// float sum()
{
    int a,b;
    printf("\nEnter any two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Add=%d\n",a+b);
}

// The returntype of function Declaration and Datatype of...
// ...Function Definition MUST be same otherwise it'll show error.