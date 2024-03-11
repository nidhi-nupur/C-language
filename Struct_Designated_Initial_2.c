#include <stdio.h> 
struct asdfg
{
    int x, y, z;
};
 int main()
{
    struct asdfg n = {.y=90,.z=876,.x=92};
    struct asdfg N = {.x=20};
    printf("x=%d\ty=%d\tz=%d\n",n.x,n.y,n.z); 
    printf("x=%d\n",N.x);
    printf("y=%d\n",N.y); // output will show y=0.
    printf("z=%d\n",N.z); // output will show z=0.
}