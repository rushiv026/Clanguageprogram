#include<stdio.h>
int square(int n);
int squares(int* n);
int main()
{
    int n=4;
    printf("Square of number:%d\n",square(n));
    printf("number:%d\n",n);


    printf("square of number:%d\n",squares(&n));
    printf("number:%d",n);






    return 0;

}
int square(int n)
{
    n=n*n;
    return n;
}
int squares(int* n)
{
    *n=(*n)*(*n);
    return *n;
}