#include<stdio.h>
void calculation(int a,int b,int *sum,int *agv,int *product);

int main()
{
    int a=3,b=5;
    int sum,agv,product;
    calculation(a,b,&sum,&agv,&product);

    printf("%d\n",sum);
    printf("%d\n",agv);
    printf("%d\n",product);
    

    return 0;

}
void calculation(int a,int b,int *sum,int *agv,int *product)
{
    *sum=a+b;
    *agv=(a+b)/2;
    *product=a*b;

}