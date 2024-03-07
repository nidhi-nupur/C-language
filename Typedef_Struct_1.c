#include<stdio.h>
typedef struct Student // Globally declared typedef 
{
    int S_No;
    char name[30];
    float percent;
}Stu;
void main()
{
    //struct Student S={1,"Nidhi",97.5}; 
    // We can declare and initialize any variable only one time.
    Stu S={1,"Nidhi",97.5}; // Can use stu instead of 'struct student'.. 
    printf("%d\t%s\t%f\n",S.S_No,S.name,S.percent);
}