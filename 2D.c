#include<stdio.h>
main()
{
    int a[3][2],b[3][2],sum[3][2];
    for(int r=0;r<3;r++)
    {
        for(int c=0;c<2;c++)
        {
            scanf("%d",&a[r][c]);
        }
    }
    for(int r=0;r<3;r++)
    {
        for(int c=0;c<2;c++)
        {
            printf("%d\t",a[r][c]);
        }
        printf("\n");
    }
    for(int r=0;r<3;r++)
    {
        for(int c=0;c<2;c++)
        {
            scanf("%d",&b[r][c]);
        }
    }
    for(int r=0;r<3;r++)
    {
        for(int c=0;c<2;c++)
        {
            printf("%d\t",b[r][c]);
        }
        printf("\n");
    }
    for(int r=0;r<3;r++)
    {
        for(int c=0;c<2;c++)
        {
            sum[r][c]=a[r][c]+b[r][c];
            printf("%d\t",sum[r][c]);
        }
        printf("\n");
    }
}