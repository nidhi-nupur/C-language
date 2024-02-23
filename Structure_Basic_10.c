// 2nd way to declare a Structure variable.
// 2nd Code to find the size of structure datatype.
#include<stdio.h>
struct student
{
    int roll_no;
    float marks;
    char name[30];
};
void main()
{
    printf("Structure size=%d",sizeof(struct student));
}
