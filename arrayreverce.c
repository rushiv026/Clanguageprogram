#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6};
    int n=6;
    for(int i=0;i<n/2;i++)
    {
        int first=arr[i];
        int last=arr[n-i-1];

        arr[i]=last;
        arr[n-i-1]=first;
    }

    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}