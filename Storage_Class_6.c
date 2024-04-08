#include<stdio.h>
void func1();
int a=57;
int b=58;
int main()
{
    func1();
    {
        int a=30;
        printf("Inside Block1, a=%d\n",a);
    }
    {
        printf("Inside Block2, a=%d\n",a++);
    }
    printf("Inside main(), a=%d\n",a);
    printf("Inside main(), b=%d\n",b);
    return 0;
}
void func1()
{
    int a=2024;
    int b=2027;
    printf("Inside func1, a=%d, b=%d\n",a,b);
}