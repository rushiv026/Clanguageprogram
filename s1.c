#include<stdio.h>
int main()
{
  //  char str[]="rushikesh";
  //  for(int i=0;str[i]!='\0';i++)
  //  {
  //   printf("%c\n",str[i]);


  //  }

  char fullname[100];
  gets(fullname);
  printf("%s",fullname);
  int count=0;



  for(int i=0;fullname[i]!='\0';i++)
  {
    count++;
    printf("%c\n",fullname[i]);
  }

printf("%d",count);


    return 0;
}