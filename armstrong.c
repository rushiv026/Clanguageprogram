#include<stdio.h>
int main()
{
    int number=152;
    int n=number,temp=0,a;
    while(n>0)
    {
        a=n%10;
        temp+=a*a*a;
        n=n/10;

    }
    printf("%d\n",temp);
    if(temp==number)
    {
        printf("armstrong number");
    }
    else
    {
        printf("not armstrong");
    }
    return 0;
}