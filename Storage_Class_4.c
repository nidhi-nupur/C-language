#include<stdio.h>
void func1();
int main()
{
    int a=7;
    func1();
    {
        int a=30;
        printf("Inside Block1, a=%d\n",a);
    }
    {
        printf("Inside Block2, a=%d\n",a++);
    }
    printf("Inside main(), a=%d\n",a);
    return 0;
}
void func1()
{
    int a=2024;
    printf("Inside func1, a=%d\n",a);
}