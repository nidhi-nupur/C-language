#include<stdio.h>
struct //student  We can skip the tag name in structure. But it is not convenient to leave it nameless. 
{
    int roll_no;
    float marks;
    char name[30];
}S;
void main()
{
    printf("Structure size=%d",sizeof(S));
    printf("Structure size=%d",sizeof(struct )); // Cause of this error, leaving it nameless would be not good.
}