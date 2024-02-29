#include<stdio.h>
struct student
{
    int roll_no;
    char name[30];
    float marks;
}s={3,"Nvi",91.7};
void main()
{
    struct student s1={1};
    struct student s2={2,"Nupur",92.9};
    printf("s1 roll_no=%d\n",s1.roll_no);
    printf("s2 roll_no=%d\n",s2.roll_no);
    printf("s roll_no=%d\n",s.roll_no);
}