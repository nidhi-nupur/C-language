#include<stdio.h>
void main()
{
    struct student
    {
        int roll_no;
        char name[30];
        float marks;
    }s={3,"Nvi",91.7};

        struct student s1={1,"Nidhi",97.8};
        struct student s2={2,"Nupur",92.9};
}
// We can initialize and declare the variable of structure inside of the main function.