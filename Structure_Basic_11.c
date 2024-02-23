#include<stdio.h>
struct student
{
    int roll_no;
    float marks;
    char name[30];
};
void main()
{
    struct student S;
    printf("Structure size=%d\n",sizeof(S));
    printf("Structure size=%d",sizeof(struct student));
}