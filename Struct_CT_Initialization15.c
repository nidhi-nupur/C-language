#include<stdio.h>
struct student
{
    int roll_no;
    char name[30];
    float marks;
};
void main()
{
    struct student s1={1,"Nidhi",97.8};
    struct student s2={2,"Nupur",94.7};
    printf("Information of s1:\n");
    printf("%d\t%s\t%f\n",s1.roll_no,s1.name,s1.marks);
    printf("Information of s2:\n");
    printf("%d\t%s\t%f\n",s2.roll_no,s2.name,s2.marks);
}