#include<stdio.h>
void main()
{
    int *p=NULL;
    printf("%d",*p);
}

// We can't dereference a NULL pointer.
//programme won't run by doing this.