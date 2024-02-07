#include<stdio.h>
#include<stdlib.h> //for malloc and calloc function.
void main()
{
    int *p=(int*)malloc(sizeof(int));
    *p=7;
    printf("%d\n",*p);
    free(p); //Dangling Pointer.
    printf("%d\n",*p);
}