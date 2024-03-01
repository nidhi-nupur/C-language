#include<stdio.h>
struct student
{
    int roll_no;
    char name[30];
    float marks;
};
void main()
{
    struct student s1={1,'Nidhi',97.8};
    struct student s2={2,'Nupur',92.9};
    if(s1>s2) /*or*/ if(s1==s2) /*or*/ if(s1!=s2) 
    // This will show error as we can't compare two structure variable member.
}