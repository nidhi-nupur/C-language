#include<stdio.h>
void main()
{
    char s[]="Hello This is Nidhi Nupur";
    char *p=s;
    printf("%c\n",*p);
    printf("%c\t%c\n",*(p++ +1),*((p-- +5)-1)+1);
    printf("%c\n",*p);
    printf("%c\t%c\n",*((p-- +5)-1)+1,*(++p+10)-32);
    printf("%c\n",*p);
    printf("%c\t %c\t %c\n",*p,*++p,*--p);
    printf("%c\n",*p);
    printf("%c\t%c\n",*((p-- +5)-1)+1,*(p++ +1));
    printf("%c\n",*p);
}