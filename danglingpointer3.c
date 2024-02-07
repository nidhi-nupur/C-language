#include<stdio.h>
int* NN()
{
    int a=0;
    return &a;
}
void main()
{
    int *p=NN();
    printf("%d\n",*p);
}

// It won't run. OR maybe will give garbage value.