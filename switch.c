#include<stdio.h>
main()
{
    // int a=2,q=5,p=4;
    // switch (a)
    // {
    // case 1:
    // {
    //     printf("Square %d",q*q);
    // }
    // break;
    // case 2:
    // {
    //     printf("Cube %d",q*q*q);
    // }
    // break;
    // default:
    // printf("enter valid number");
    // break;
    // }





    // switch (a)
    // {
    // case 1:
    // {
    //     printf("Add=%d",q+p);
    // }
    //     break;
    // case 2:
    // {
    //     printf("Sub=%d",q-p);
    // }
    //     break;
    // case 3:
    // {
    //     printf("Mult=%d",q*p);
    // }
    //     break;
    // case 4:
    // {
    //     printf("Div=%d",q/p);
    // }
    //     break;
    // default:
    // printf("Enter Valid Number");
    //     break;
    // }

    printf("Welcome to My Calculator\n");
    int a,p,q;
    printf("Enter the value of p,q,a");
    scanf("%d %d %d",&p,&q,&a);
    switch (a)
    {
    case 1:
    {
        printf("Add=%d",p+q);
    }
    break;
    case 2:
    {
        printf("Subtract=%d",p-q);
    }
    break;
    case 3:
    {
        printf("Multiply=%d",p*q);
    }
    break;
    case 4:
    {
        printf("Divide=%d",p/q);
    }
    break;
    default:
    printf("Enter Valid Number");
        break;
    }


}