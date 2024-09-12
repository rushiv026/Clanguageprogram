#include<stdio.h>
int main()
{
    int *prt;
    int x;
    prt=&x;
    *prt=5;
    printf("%d",x);
    return 0;
}
