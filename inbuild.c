#include<stdio.h>
#include<string.h>

int main()
{
    char str[]="rushikesh";
    char str1[]="vyavahare";


    // printf("%s\n",str);
    // int len=strlen(str);
    // printf("%d",len);

    // strcpy(str,str1);
    // puts(str);

    strncpy(str,str1,4);
    printf("%s\n",str);

    strcat(str1,str);
    printf("%s\n",str1);

    strncat(str,str1,4);
    printf("%s\n",str);


    printf("%d\n",strcmp(str1,str));
    printf("%d\n",strncmp(str1,str,1));


    char c='u';
    char *result;
    result=strchr(str,c);
    printf("%s\n",result);
    


    







    return 0;

}