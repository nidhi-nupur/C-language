#include<stdio.h>
main()
{
    int a,b,c;
    printf("Enter any three numbers");
    scanf("%d %d %d",&a,&b,&c);
    if(a!=b && a!=c && b!=c)
    {
        if(a>b && a>c)
        {
            printf("First number is greatest");
        } 
        else if(b>c && b>a)
        {
            printf("Second number is greatest");
        }
        else
        {
            printf("Third number is greatest");
        }
    }
    else if(a!=b && a!=c && b==c)
    {
        printf("The last two numbers are equal");
    }
    else if(a!=b && a==c && b!=c)
    {
        printf("First and last numbers are equal");
    }
    else if(a==b && a!=c && b!=c)
    {
        printf("First two numbers are equal");
    }
    else
    {
        printf("All the numbers are equal");
    }
}