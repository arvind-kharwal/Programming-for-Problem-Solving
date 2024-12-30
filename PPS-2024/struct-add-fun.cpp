#include<stdio.h>
#include<stdlib.h>
void display(struct Employee *);
struct Employee
{
    int id;
    char name[20];
    float sal;
};
int main()
{
    struct Employee E = {1,"Arvind",100.59};
    display(&E);
}
void display(struct Employee *p)
{
    printf("%d\t%s\t%f",p->id,p->name,p->sal);
}