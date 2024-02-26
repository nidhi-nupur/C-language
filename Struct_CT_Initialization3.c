#include<stdio.h>
struct student
{
    int roll_no;
    char name[30];
    float marks;
};
void main()
{
    struct student s={1}; // Remaining will be null and 0 automatically.
}