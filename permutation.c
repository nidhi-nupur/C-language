#include<stdio.h>
main()
{
    int n,r,s,i,x;
    printf("Enter the value of n,r");
    scanf("%d %d",&n,&r);
    s=n-r;
    int nFact=1;
    for(i=1;i<=n;i++)
    {
        nFact=nFact*i;
    }
    int rFact=1;
    for(i=1;i<=r;i++)
    {
        rFact=rFact*i;
    }
    int sFact=1;
    for(i=1;i<=s;i++)
    {
        sFact=sFact*i;
    }
    x=nFact/(rFact*sFact);
    printf("C(%d,%d)=%d",n,r,x);
}