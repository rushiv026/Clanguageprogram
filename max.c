#include<stdio.h>
#include<math.h>
#include<limits.h>
int main()

{
    int arr[]={-1,3,2,8};

    int max=INT_MIN;
    int min=INT_MAX;

    for(int i=0;i<5;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
           // printf("helo:%d",max);
           // break;

        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("%d",max);
    printf("\n%d",min);
}