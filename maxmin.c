#include<stdio.h>
int main()
{

    int a=10,b=20;
    int *ptr1=&a,*ptr2=&b;

    if(*ptr1>*ptr2)
    {
        printf("%d\n",*ptr1);

    }
    else
    {
       printf("%d\n",*ptr2);  
    }
  
  
    return 0;

}