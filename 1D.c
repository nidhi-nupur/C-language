#include<stdio.h>
main()
{
    //int array[5]; //declaration of array
    int array[5]={1,23,5,46,7}; //initialization at the time of declaration
   
   
    //access
    // printf("%d",array[0]);
    
    
    for(int i=0;i<5;i++)
    {
        printf("%d index %d\n",i,array[i]);
    }
}