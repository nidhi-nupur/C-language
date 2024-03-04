#include<stdio.h>
struct student
{
    int roll_no;
    char name[30];
    float marks;
}s[3];
void main()
{
    struct student s[3];
    printf("Enter the info of s:");
    for(int i=0;i<3;i++)
    {
        scanf("%d %c %f",&s.roll_no,s.name,&s.marks);
    }
    for(int i=0;i<3;i++)
    {
        printf("%d\t%c\t%f",s.roll_no,s.name,s.marks);
    }
}