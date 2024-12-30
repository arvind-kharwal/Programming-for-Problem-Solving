#include<stdio.h>
#include<stdlib.h>
void display(struct Employee);
struct Employee
{
    int id;
    char name[20];
    float sal;
};
int main()
{
    struct Employee E = {1,"Arvind",100.59};
    display(E);
}
void display(struct Employee E)
{
    printf("%d\t%s\t%f",E.id,E.name,E.sal);
}