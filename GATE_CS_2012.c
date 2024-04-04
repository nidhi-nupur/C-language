#include<stdio.h>
int a=0, b=0, c=0;
void pointerfunction(void);
int main()
{
    auto int a=1; // variable has auto storage class.
    pointerfunction();
    a+=1;
    pointerfunction();
    printf("%d %d in main function\n",a,b);
}
void pointerfunction(void)
{
    register int a=2; // variable has register storage class.
    int b=1;
    a+= ++b;
    printf("%d %d in pointerfunction(void)\n",a,b);
}