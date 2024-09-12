#include<stdio.h>
int main()
{
    int x=5;
    int *ptr=&x;
    int **pptr=&ptr;
    printf("%d",**pptr);
     return 0;
}