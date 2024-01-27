#include<stdio.h>
main()
{
    int l,b;
    printf("Put the value of l,b: ");
    scanf("%d %d",&l,&b);
    printf("Area=%d\nPerimeter=%d",l*b,2*(l+b));
}