#include<stdio.h>
int count(int *arr,int n);
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    printf("%d\n",count(arr,9));

    //print *(arr+2) and *(arr+10)
    printf("%d\n",*(arr+2));
    printf("%d\n",*(arr+10));
    return 0;


}

int count(int *arr,int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            count++;
        }
    }
    return count;
}