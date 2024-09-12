#include<stdio.h>
void main()
{
    int n=6;

    int a=0;
    int b=1;
    printf("%d\n",a);
    printf("%d\n",b);
    int c;
    while(n>0)
    {
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
        n=n-1;

    }
}