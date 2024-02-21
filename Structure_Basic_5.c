// 1st way to declare a Structure variable.
// Code to find the size of structure datatype.
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
    printf("Structure size=%d",sizeof(S));
}