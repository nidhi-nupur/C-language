#include<stdio.h>
#define MINIMUM(x,y) if(x>y)\
                        printf("%d is minimum.",y);\
                     else\
                        printf("%d is minimum.",x);
int main()
{
    MINIMUM(5,2);
    #undef MINIMUM

    MINIMUM(7,4);
    return 0;
}