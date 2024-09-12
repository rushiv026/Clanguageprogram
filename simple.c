#include<stdio.h>
#include<string.h>
struct student
{
    int rollno;
    float cgpa;
    char *name;
};
int main()
{
    struct student s1;
   // printf("%u/n",&s1.name);
    s1.rollno=20;
    s1.cgpa=7.9;
    s1.name="rushi char c[100];";
    printf("%d\t%s\t%f",s1.rollno,s1.name,s1.cgpa);

 
    return 0;
}