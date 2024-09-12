#include<stdio.h>
#include<math.h>

int main()
{

    // int n=25;
    // int n1=sqrt(n);
    // printf("%d",n1);

    // return 0;
    int n=625;
    // for(int i=1;i<256/4;i++)
    // {
    //     if(i*i==256)
    //     {
    //         printf("%d\n",i);
    //         break;
    //     }
    // }
    int i=1;

    while(i>0)
    {
        if(i*i==n)
        {
            printf("%d",i);
            break;
        }
        i++;
        
    }

}