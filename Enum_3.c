#include<stdio.h>
enum Xenum{C,CPP,Java};
enum Yenum{Xenum};
main()
{
    enum Xenum var;
    printf("%d",sizeof(var));
    return 0;
}