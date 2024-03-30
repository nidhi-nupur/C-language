#include<stdio.h>
#include<stdlib.h>
int *display()
{
    int n,i,*p;
    printf("Enter the total no. of values you want:\n");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("Enter the entries:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    return p;
}
int main()
{
    int n,*p;
    int i;
    printf("Enter the total no. of values you want:\n");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    if(p==NULL)
    {
        printf("Memory not Allocated.");
    }
    printf("Enter the entries:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    free(p);
    printf("Entered entries are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(p+i));
    }
    return 0;
}