#include<stdio.h>
int main()
{
    int DATA=257;
    int *piSumData=NULL;
    piSumData=&DATA;
    *piSumData=85;
    printf("*piSumData=%d\n",piSumData);
}