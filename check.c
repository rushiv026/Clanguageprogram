#include<stdio.h>
void main()
{
    char ch='a';
    if(ch>='A' && ch<='Z')
    {
        printf("Character Uppercase");
    }
    else if(ch>='a' && ch<='z')
    {
        printf("Character is Lowercase");
    }
    else
    {
        printf("Not character");
    }
}