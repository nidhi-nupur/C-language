// 4th way to declare a Structure variable.
// Code to find the size of structure datatype.
#include<stdio.h>
struct student
{
    int roll_no;
    float marks;
    char name[30];
}S1,S2;
void main()
{
    printf("Structure size=%d\n",sizeof(S1));
    printf("Structure size=%d",sizeof(S2));
}