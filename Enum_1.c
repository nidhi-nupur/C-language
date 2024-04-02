#include<stdio.h>
enum Xenum{C,CPP,Java};
main()
{
    enum Xenum var;
    printf("%d",sizeof(var));
    return 0;
}