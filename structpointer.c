#include<stdio.h>
#include<string.h>
struct emp 
{
    int empno;
    char name[100];
    float salary;


};

int main()
{
    struct emp e1={10,"rushi",20000};
    printf("%d",e1.empno);

    struct emp *ptr=&e1;
    printf("\n%d",(*ptr).empno);

    struct emp e2[100];
    e2[0].empno=90;
    e2[0].salary=892072;
    strcpy(e2[0].name,"kamlesh");

    printf("\n%d\t%s\t%f",e2[0].empno,e2[0].name,e2[0].salary);


    e2[1].empno=33;
    strcpy(e2[1].name,"ganesh");
    e2[1].salary=59800;
    printf("\n%d\t%s\t%f",e2[1].empno,e2[1].name,e2[1].salary);




}
