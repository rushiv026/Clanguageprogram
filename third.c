#include<stdio.h>
int main()
{

  char str[100];
  fgets(str,100,stdin);
  puts(str); 

  for(int i=0;str[i]!='\0';i++)
  {
    printf("%c\n",str[i]);
  }

    return 0;
}