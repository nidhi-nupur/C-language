#include<stdio.h>
int a=0, b=0, c=0;
void pointerfunction(void);
int main()
{
    static int a=1;
    pointerfunction();
    a+=1;
    pointerfunction();
    printf("%d %d in main function\n",a,b);
}
void pointerfunction(void)
{
    static int a=2;
    int b=1;
    a+= ++b;
    printf("%d %d in pointerfunction(void)\n",a,b);
}