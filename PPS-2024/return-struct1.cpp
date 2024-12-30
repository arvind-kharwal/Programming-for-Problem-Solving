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
    struct Employee r;
    display(&E);
    
}
void display(struct Employee *r)
{
    printf("%d\t%s\t%f",r->id,r->name,r->sal);
}