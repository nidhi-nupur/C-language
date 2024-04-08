#include<stdio.h>
#define MINIMUM(x,y) if(x>y)\
                        printf("y is minimum.");\
                     else\
                        printf("x is minimum.");
int main()
{
    MINIMUM(5,2);
    return 0;
}