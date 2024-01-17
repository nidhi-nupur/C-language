// #include<stdio.h>
// main()
// {
//     int n,i, fact=1;
    // printf("n=");
    // scanf("%d",&n);
    // for(i=1;i<=n;i++)
    // {
//         fact=fact*i;
//     }
//     printf("the factorial of %d is %d",n,fact);
// }

#include<stdio.h>
main()
{
    int n,i,fact=1;
    printf("n= ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        printf("%d",i);
        if(n>i)
        {
            printf("*");
        }
    }
    printf("=%d",fact);
}