#include<stdio.h> 
#include<conio.h>
int main()
{
    int f0,f1,f,n,i;
    printf("ENTER THE VALUE FOR n \n"); 
    scanf("%d",&n);
    f0=0; 
    f1=1;
    printf("FIBONACCI SEQUENCE FOR THE FIRST %d TERMS:\n",n); 
    i=0;
    while(i<n)
    {
        printf("%d\t",f0); 
        f=f0+f1;
        f0=f1;
        f1=f;
        i=i+1;
    }
}