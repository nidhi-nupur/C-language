#include<stdio.h>
int a=60;
int main()
{
    func1();
    {
        int a=30;
        printf("Inside Block, a=%d\n",a);
    }
    {
        printf("Post increment of Globally Declared a=%d\n",a++);
    }
    return 0;
}
void func1()
{
    int a=2024;
    printf("Inside func1, a=%d\n",a);
}