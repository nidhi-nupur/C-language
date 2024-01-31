#include<stdio.h>
int main()
{
    int a=-11;
    int *p=&a;
    *p=10;
    printf("%d\n",a);


    // const int a=-11;
    // const int *p=&a;
    // *p=10; //This will show error as the value of a can't be change due to 'const' datatype.
    // printf("%d\n",a);


    // const int a=-11;
    // int *p=&a;
    // *p=10;
    // printf("%d\n",a);


    // int a=-11;
    // const int *p=&a;
    // *p=10;  //This will also show errer as address of a is constant.We can't change that.
    // printf("%d\n",a);
}