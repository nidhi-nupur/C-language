#include<stdio.h>
int main()
{
    int a=7;
    func1();
    {
        int a=30;
        printf("Inside Block, a=%d\n",a);
    }
    {
        printf("Post increment of Locally Declared a=%d\n",a++);
    }
    return 0;
}
void func1()
{
    int a=2024;
    printf("Inside func1, a=%d\n",a);
}