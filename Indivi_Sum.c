#include<stdio.h>
#include<conio.h>
int main()
{
    int n,r,sum=0; 
    printf("ENTER A POSITIVE INTEGER \n");
    scanf("%d",&n); 
    while(n!=0)
    {
        r=n%10;
        sum=sum+r; 
        n=n/10;
    }
    printf("THE SUMOF INDIVIDUAL DIGITS OF A POSITIVE INTEGER IS..%d",sum);

}