#include<stdio.h>
struct student
{
    int roll_no;
    char name[30];
    float marks;
};
void main()
{
    struct student s={'Nidhi',1,97.8}; // This would be wrong, order should match with the datatype.
}