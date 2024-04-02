#include<stdio.h>
#include<stdlib.h>
int main()
{
    int ch=1;
    int *p;
    while(ch<50)
    {
        printf("Memory Leak Demo\n");
        p=(int*)malloc(50000*sizeof(int));
        printf("continue?? Press 1 for continue");
        scanf("%d",&ch);
        free(p);
    }
}