#include<stdio.h>

void table(int arr[][10],int n);
int main()

{
    int n=2;
    int arr[10][10];

    table(arr,n);

}

void table(int arr[][10],int n)
{
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            arr[i][j]=n*(j+1);
        }
        n++;
    }
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
          printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

}