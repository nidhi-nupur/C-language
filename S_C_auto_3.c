#include<stdio.h>
auto int a=2024;
int main()
{
    auto int a=30;
    {
        auto int a;
        printf("a=%d\n",a);
    }
    printf("a=%d\n",a);
    return 0;
}