#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,*p;
    int i;
    printf("Enter the total no. of values you want:\n");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("Enter the entries:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    printf("Enter the updated size of n:\n");
    scanf("%d",&n);
    int *p1=(int*)realloc(p,n*sizeof(int));
    printf("Previous Address=%d, New Address=%d\n",p,p1);
    printf("Entered entries are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(p1+i));
    }
    free(p1);
}