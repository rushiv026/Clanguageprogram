#include<stdio.h>

int fibs(int n);
int main()
{
    printf("%d\n",fibs(5));
    return 0;

}
int fibs(int n)
{
    if(n==0)
    {
        return 1;
    }
    if(n==1)
    {
        return 1;
    }
    int fib1=fibs(n-1);
    int fib2=fibs(n-2);
    int total=fib1+fib2;
    return total;
}
