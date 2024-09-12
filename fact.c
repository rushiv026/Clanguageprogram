#include<stdio.h>
int facts(int n);
int main()
{
    printf("%d",facts(5));
    return 0;
}
int facts(int n)
{
    if(n==1)
    {
        return 1;
    }
    int f=facts(n-1);
    int fa=f*n;
    return fa;

}