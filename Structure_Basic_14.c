#include<stdio.h>
struct            // Unnamed structure.
{
    int roll_no;
    float marks;
    char name[30];
}S1,S2;
void main()
{
    printf("Structure size=%d\n",sizeof(S1));
    printf("Structure size=%d",sizeof(S2));
    printf("Structure size=%d",sizeof(struct )); // Cause of this error, leaving it nameless would be not good.
}