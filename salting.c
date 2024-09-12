#include<stdio.h>
#include<string.h>
int main()
{

    char password[90];
    fgets(password,100,stdin);
    //printf("%s",password);

    char salt[]="123";
    char newpassword[100];
    strcpy(newpassword,password);
    strcat(newpassword,salt);   
    puts(newpassword);
    return 0;

}