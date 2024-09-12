#include<stdio.h>
#include<string.h>
typedef struct housedetails
{
    int hno;
    int block;
    char city[20];
    char state[30];
}house;
int main()
{
    house h[5];
    for(int i=0;i<5;i++)
    {
         printf("enter hno,block,city,and state");
         scanf("%d",&h[i].hno);
         scanf("%d",&h[i].block); 
         scanf("%s",h[i].city);
         scanf("%s",h[i].state);
    }

    for(int i=0;i<5;i++)
    {
        printf("\n%d\t%d\t%s\t%s",h[i].hno,h[i].block,h[1].city,h[1].state);
    }
    return 0;
}
