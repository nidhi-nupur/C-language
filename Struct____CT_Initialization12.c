#include<stdio.h>
struct student
{
    int roll_no;
    char name[5];
    float marks;
};
void main()
{
    struct student s1;
    struct student s2={2,"Nupur",92.9};
    s1.roll_no=1;
    s1.name[5]={"Nidhi"};
    s1.marks=98.54;
    printf("s1 roll_no=%d\n",s1.roll_no);
    printf("s1 name=%s\n",s1.name);
    printf("s1 marks=%f\n",s1.marks);
}