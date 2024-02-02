#include<stdio.h>
int main()
{
    // int a[]={3};
    // int a[]={3,-3,0,-5,9,7};
    char a[]={'d','g'};
    void *p=&a;
    // p=p+sizeof(int);
    p=p+sizeof(char);
    // printf("%d",*(int*)p);
    printf("%c",*(char*)p);
}