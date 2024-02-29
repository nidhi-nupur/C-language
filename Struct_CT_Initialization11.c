#include<stdio.h>
struct student
{
    int roll_no;
    char name[30];
    float marks;
};
void main()
{
    struct student s1;
    struct student s2={2,"Nupur",92.9};
    s1=s2;
}