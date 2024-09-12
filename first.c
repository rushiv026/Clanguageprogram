#include<stdio.h>
int main()
{
    int age=20;
    int *ptr=&age;
    int _age=ptr;
    printf("%u\n",&age);
    printf("%u\n",*ptr);

   printf("%u\n",&ptr);
   printf("%d",_age);
    return 0;

}