#include<stdio.h>
#include<stdlib.h>
struct Employee
{
    int id;
    char name[20];
    float sal;
};
int main()
{
    struct Employee E = {1,"Arvind",100.59};
    struct Employee *p;
    p = &E;
    printf("%d\t%s\t%f",p->id,p->name,p->sal);

}