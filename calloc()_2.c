#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,*p;
    int i;
    printf("Enter the total no. of values you want:\n");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));
    printf("Entered entries are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(p+i)); // By default it'll give 0.
    }
    free(p);
}