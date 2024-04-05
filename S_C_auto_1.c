#include<stdio.h>
int main()
{
    auto int a=30;
    {
        auto int a=50;
        printf("a=%d\n",a);
    }
    printf("a=%d\n",a);
    return 0;
}